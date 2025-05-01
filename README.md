# Arduino-Based Ultrasonic Car Parking Distance Sensor

# 📄 Description: (Deskripsi)

This project implements an Arduino-based ultrasonic distance sensor system designed to assist car parking by detecting obstacles and measuring the distance between the vehicle and objects behind it.
The system uses an ultrasonic sensor (such as the HC-SR04) to measure the distance and display the results via an LED indicator.

(Proyek ini menerapkan sistem sensor jarak ultrasonik berbasis Arduino yang dirancang untuk membantu parkir mobil dengan mendeteksi rintangan dan mengukur jarak antara kendaraan dan objek di belakangnya. Sistem ini menggunakan sensor ultrasonik (seperti HC-SR04) untuk mengukur jarak dan menampilkan hasilnya melalui indikator LED.)

# 🛠️ Components Used: (Alat Yang Digunakan)

- Arduino UNO (or compatible board) (atau papan yang kompatibel)
- Ultrasonic sensor (e.g., HC-SR04) (Sensor ultrasonik, contoh: HC-SR04)
- Buzzer / LEDs / LCD (optional for output) (opsional untuk output)
- Jumper wires (kabel jumper)
- Breadboard (optional) (opsional)

# 🔧 How It Works: (Cara Kerja)

- The ultrasonic sensor emits sound waves and receives the echo from nearby objects. (Sensor ultrasonik memancarkan gelombang suara dan - menerima gema dari objek di sekitarnya.)
- The Arduino calculates the distance using the time delay. (Arduino menghitung jarak berdasarkan jeda waktu antara pemancaran dan penerimaan sinyal.)
- Depending on the distance, the system can:
  - Trigger a buzzer if an object is too close. (Menyalakan buzzer jika objek terlalu dekat.)

#☁️ Steps to Upload and Simulate on Wokwi: (Cara Upload Ke Wokwi dan Simulasikan ke Wokwi)

- Go to https://wokwi.com. (Buka situs https://wokwi.com.)
- Click "Start New Project" > Choose Arduino UNO. (Klik "Start New Project" > Pilih Arduino UNO.)
- In the simulation environment: (Di dalam lingkungan simulasi:)
- Add components: Ultrasonic Sensor (HC-SR04), LED and Buzzer . (Tambahkan komponen Ultrasonic Sensor, Led dan Buzzer.)
- Replace the default sketch.ino code with your Arduino sketch. (Ganti kode default dengan kode Arduino milikmu.)
- Replace the default diagram code with diagram.json inside the file (ganti kode diagram dengan kode yang ada didalam file diagram.json)
- Click the green "Play" button to start the simulation. (Klik tombol hijau "Play" untuk memulai simulasi.)
- Use the virtual object to test distance changes in real-time. (Gunakan objek virtual untuk menguji perubahan jarak secara real-time.)
