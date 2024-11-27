# Sistem Pemanfaatan Air Limbah Pembuatan Tahu Untuk Kolam Ikan Dengan Sensor Berbasis Arduino

Proyek ini bertujuan untuk membuat memanfaatkan kembali limbah cair tahu untuk digunakan sebagai pakan ikan dengan sistem yang terintegrasi dengan sensor dan Arduino.

## Fitur Utama
- **Monitoring pH Air**: Menggunakan sensor pH untuk membaca tingkat keasaman/alkalinitas air secara real-time.
- **Pengendalian Pompa Air**: Pompa air dinyalakan atau dimatikan secara otomatis melalui relay, berdasarkan bacaan dari sensor.
- **Tampilan Informasi**: Hasil pembacaan sensor dan status sistem ditampilkan pada layar LCD.

## Komponen Utama
- **Arduino UNO**: Mikrocontroller untuk memproses data dan mengendalikan perangkat.
- **Sensor pH**: Digunakan untuk membaca nilai pH air.
- **Relay**: Untuk mengontrol aliran listrik ke pompa air.
- **Pompa Air**: Memompa air untuk melakukan proses filtrasi kembali
- **LCD 16x2**: Menampilkan informasi status sistem.

## Cara Kerja
1. Sensor pH membaca nilai keasaman air dan mengirimkan data ke Arduino.
2. Arduino memproses data dan memutuskan apakah pompa air perlu dinyalakan atau dimatikan.
3. Relay mengontrol aliran listrik ke pompa sesuai perintah dari Arduino.
4. Informasi pembacaan pH dan status pompa ditampilkan di LCD.