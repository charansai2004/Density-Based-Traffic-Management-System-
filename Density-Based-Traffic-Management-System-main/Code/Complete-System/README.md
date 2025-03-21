# Density-Based Traffic Management System Code

## Overview
This code manages traffic signals for a four-road intersection based on real-time traffic density. It uses ultrasonic sensors to detect vehicle presence, TM1637 7-segment displays to show countdown timers, and LEDs to represent traffic signals. The system dynamically adjusts signal timings for each road to optimize traffic flow and reduce congestion.

---

## Components Used
- **TM1637 Displays:** Show countdown timers for each road.  
- **Ultrasonic Sensors (HC-SR04):** Detect vehicle presence and calculate distance for traffic density.  
- **LEDs (Red, Yellow, Green):** Represent traffic signals for each road.  
- **Arduino Mega:** Manages sensors, LEDs, displays, and logic flow for the complete system.

---

## Pin Configuration
| Component       | Pin Numbers for Each Road |
|-----------------|----------------------------|
| TM1637 CLK      | Road 1: 27, Road 2: 8, Road 3: 47, Road 4: 37 |
| TM1637 DIO      | Road 1: 26, Road 2: 9, Road 3: 46, Road 4: 36 |
| Green LED       | Road 1: 30, Road 2: 7, Road 3: 48, Road 4: 40 |
| Yellow LED      | Road 1: 29, Road 2: 6, Road 3: 49, Road 4: 39 |
| Red LED         | Road 1: 28, Road 2: 5, Road 3: 50, Road 4: 38 |
| Ultrasonic TRIG | Road 1: 23/25, Road 2: 13/11, Road 3: 43/45, Road 4: 33/35 |
| Ultrasonic ECHO | Road 1: 22/24, Road 2: 12/10, Road 3: 42/44, Road 4: 32/34 |

---

## Code Explanation

### **1. Setup Function (`setup()`)**
- Initializes the TM1637 displays at maximum brightness.
- Configures LED pins as outputs and ultrasonic sensor pins for input/output operations.

### **2. Loop Function (`loop()`)**
- Reads distance values from two ultrasonic sensors for each road.
- Based on the sensor readings:
  - **High Traffic Density:** If both sensors detect traffic, green light for 10 seconds, yellow for 5 seconds.
  - **Low Traffic Density:** If only one sensor detects traffic, green for 5 seconds, yellow for 5 seconds.
  - **No Traffic:** Turns on red light and clears the display.
- Cycles through each road sequentially and repeats the process.

### **3. Read Ultrasonic Function (`readUltrasonic()`)**
- Triggers the ultrasonic sensor and reads the time taken for the sound wave to return.
- Calculates the distance using the formula `distance = duration * 0.034 / 2`.

### **4. Manage Traffic Function (`manageTraffic()`)**
- Activates the green light and starts the countdown timer for the specified road.
- Switches to yellow light during the last 5 seconds of the timer.
- Resets to red light after the timer ends.

### **5. Show Timer Function (`showTimer()`)**
- Displays the countdown timer on the TM1637 display.
- Changes the traffic light state to yellow during the last 5 seconds.

### **6. Clear and Reset Functions (`clearAllDisplays()`, `setAllToRed()`)**
- Ensures all displays are cleared and all roads default to red lights between cycles.

---

## Usage Instructions
1. Connect the components as per the pin configuration table.
2. Upload the code to the Arduino Mega using the Arduino IDE.
3. Observe traffic light changes and countdowns based on vehicle presence detected by sensors.

---
for [Code](./DBTMS_for_Complete_System.ino)
