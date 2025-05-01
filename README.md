# Arduino-Based Ultrasonic Car Parking Distance Sensor

# 📄 Description:
This project implements an Arduino-based ultrasonic distance sensor system designed to assist car parking by detecting obstacles and measuring the distance between the vehicle and objects behind it. The system uses an ultrasonic sensor (such as the HC-SR04) to measure the distance and display the results via an LED indicator or a serial monitor.

# 🛠️ Components Used:
- Arduino UNO (or compatible board)
- Ultrasonic sensor (e.g., HC-SR04)
- Buzzer / LEDs / LCD (optional for output)
- Jumper wires
- Breadboard (optional)

# 🔧 How It Works:
- The ultrasonic sensor emits sound waves and receives the echo from nearby objects.
- The Arduino calculates the distance using the time delay.
- Depending on the distance, the system can:
- Trigger a buzzer if an object is too close,
- Show distance on an LCD or via Serial Monitor.

# ☁️ Steps to Upload and Simulate on Wokwi:
Go to https://wokwi.com.
- Click "Start New Project" > Choose Arduino UNO.
- In the simulation environment:
- Add components: Ultrasonic Sensor (HC-SR04), LED or Buzzer as needed.
- Replace the default sketch.ino code with your Arduino sketch.
- Connect the sensor pins to appropriate Arduino pins (e.g., Trig to D9, Echo to D10).
- Click the green "Play" button to start the simulation.
- Use the virtual object to test distance changes in real-time.
