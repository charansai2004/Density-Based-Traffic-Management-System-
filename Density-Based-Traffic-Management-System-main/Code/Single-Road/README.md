# Traffic Management System for Single Road Code

## Overview
This Arduino-based project dynamically controls traffic signals based on real-time vehicle detection using ultrasonic sensors. It uses LEDs to represent traffic lights and a TM1637 7-segment display to show countdown timers for signal durations.

---

## Components Used
- **TM1637 Display:** Displays countdown timers for green and yellow light durations.  
- **Ultrasonic Sensors:** Detect vehicle presence and calculate distance to determine traffic density.  
- **LEDs (Red, Yellow, Green):** Represent traffic signal states.  
- **Arduino Mega:** Controls the sensors, LEDs, and TM1637 display.

---

## Pin Configuration
| Component       | Pin Number  |
|-----------------|-------------|
| TM1637 CLK      | 27          |
| TM1637 DIO      | 26          |
| Green LED       | 30          |
| Yellow LED      | 29          |
| Red LED         | 28          |
| Ultrasonic TRIG1| 23          |
| Ultrasonic ECHO1| 22          |
| Ultrasonic TRIG2| 25          |
| Ultrasonic ECHO2| 24          |

---

## Code Explanation

### **1. Setup Function (`setup()`)**
- Initializes the TM1637 display at maximum brightness.
- Sets the LED pins as outputs.
- Configures ultrasonic sensor pins for input/output operations.

### **2. Loop Function (`loop()`)**
- Reads distance values from two ultrasonic sensors using `readUltrasonic()` function.  
- Depending on the measured distances:
  - **Both Sensors Detect Traffic:** Calls `manageTraffic(15)` to activate the green light for 10 seconds and yellow for 5 seconds.  
  - **One Sensor Detects Traffic:** Calls `manageTraffic(10)` to activate green for 5 seconds and yellow for 5 seconds.  
  - **No Traffic:** Displays a red light and clears the display.

### **3. Read Ultrasonic Function (`readUltrasonic()`)**
- Triggers the ultrasonic sensor and reads the time taken for the sound wave to return.  
- Calculates the distance using the formula `distance = duration * 0.034 / 2`.

### **4. Manage Traffic Function (`manageTraffic()`)**
- Activates the green light and countdown timer based on traffic density.  
- Turns off the green light and switches to red after the timer ends.

### **5. Show Timer Function (`showTimer()`)**
- Displays the countdown on the TM1637 display.  
- Activates both green and yellow LEDs during the last 5 seconds for warning.

---

## Usage Instructions
1. Connect components as per the pin configuration table.
2. Upload the code to the Arduino Mega using the Arduino IDE.
3. Observe traffic light changes and countdown based on vehicle presence detected by sensors.

---

### for [Code](./DBTMS_for_Single_Road.ino)
