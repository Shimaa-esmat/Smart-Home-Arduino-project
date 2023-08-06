# Arduino Bluetooth Smart Home
This Arduino project implements a simple smart home system that allows remote control of lights, appliances and doors.
This project involves controlling various devices (LEDs, DC motor, and servo) using an Arduino board and Bluetooth communication. The project also includes an IR allows the door to automatically open when a objects walk up to it and close after they pass through.
# Hardware Used
- Arduino board
- Bluetooth module
- LEDs
- DC motor
- relay to control motor
- Servo motor
- IR sensor
- Resistors (220 ohm)
- Jumper wires
# Instructions
* Connect the Bluetooth module to the Arduino board's RX and TX pins.
* Connect the IR sensor ,Servo ,relay and LEDs to the specified pins on the Arduino board.
* Connect the DC motor to the relay to safely start and stop a moto
* Install the required libraries (SoftwareSerial.h, Servo.h) in the Arduino IDE.
* Upload the provided code to the Arduino board using the Arduino IDE.
# How it Works
1. Bluetooth Control:
   * The Arduino is connected to a Bluetooth module to receive commands wirelessly.
   * When a character is received from Bluetooth, the corresponding action is performed:
     * 'A'/ 'a' - Controls LED1
     * 'B'/ 'b' - Controls LED2
     * 'C'/ 'c' - Controls LED3
     * 'D'/ 'd' - Controls LED4
     * 'M'/ 'm' - Controls the DC motor
     * 'E' - Opens the door by turning the servo motor to 90 degrees
     * 'e' - Closes the door by turning the servo motor to 0 degrees
  2. IR Sensor Control:
     - IR sensor is used to detect objects and automatically open/close the door.
     - When the IR sensor detects an object (IR is HIGH), the servo motor turns to 90 degrees to open the door.
     - When no object is detected (IR is LOW), the servo motor turns to 0 degrees to close the door.
# Simulation:
![Screenshot 2023-08-06 040458](https://github.com/Shimaa-esmat/Smart_Home/assets/120101693/ffd56e38-86d4-4cf0-944b-af0718936665)
# Conclusion
* This smart home system allows remote control of lights, appliances and doors through either Bluetooth commands or motion detection using an IR sensor
* It's a simple implementation of smart home automation.
# Contributions
 1. [Ahmed Fayad](https://github.com/0xAMF)
 2. [Tasneem Ashraf](https://github.com/tasnym1)
 3. [Rahma](https://github.com/RAHMA993)
 4. [Sayed abdalsamie](https://github.com/SayedAbdalsamie)
 5. [Shimaa Esmat](https://github.com/Shimaa-esmat)
 6. [Manal Ali](https://github.com/manal-3li)



