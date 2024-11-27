#include <LiquidCrystal_I2C.h>

// Konfigurasi LCD
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);
String kondisiPompa;

const int sensorPin = A0;
const int relayPin = 8;
float Po = 0;

void setup()
{ 
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);

  // Inisialisasi LCD
  lcd.init();
  lcd.backlight();
}
void loop()
{
  int pengukuranPh = analogRead(sensorPin);
  Serial.print("Nilai ADC Ph: ");
  Serial.println(pengukuranPh);
  double TeganganPh = 5 / 1024.0 * pengukuranPh;
  Serial.print("TeganganPh: ");
  Serial.println(TeganganPh, 3);

  ///Po = 7.00 + ((teganganPh7 - TeganganPh) / PhStep);
  Po = 7.00 + ((3.29 - TeganganPh) / 0.106);
  Serial.print("Nilai PH cairan: ");
  Serial.println(Po, 3);

  // Hidup matikan pompa berdasarkan bacaan pH
  if (Po < 5 || Po > 8) {
   digitalWrite(relayPin, HIGH);
   kondisiPompa = "Pompa Hidup";
   Serial.println("Pompa Hidup");
  } else {
   digitalWrite(relayPin, LOW);
   kondisiPompa = "Pompa Mati";
   Serial.println("Pompa Mati");
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bacaan pH: ");
  lcd.print(Po, 2); // Tampilkan 2 angka desimal
  lcd.setCursor(0, 1);
  lcd.print(kondisiPompa);

  delay(500);

}