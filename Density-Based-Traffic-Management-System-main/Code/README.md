# Code Directory

This directory contains the source code for the **Density-Based Traffic Management System**, including separate implementations for a single road and a complete multi-road traffic management system.

---

## Contents
1. **[Single Road Code](./Single-Road/DBTMS_for_Single_Road.ino)**  
2. **[Complete System Code](./Complete-System/DBTMS_for_Complete_System.ino)**

---

### Single Road Code
This code manages traffic signals for a single road based on real-time traffic density.  
- **Components Used:** Arduino Mega, ultrasonic sensors, TM1637 7-segment display, and LEDs.  
- **Features:**  
  - Detects vehicle presence using ultrasonic sensors.  
  - Dynamically adjusts signal timings for low and high-density traffic.  
  - Displays countdown timers on a 7-segment display.

### Complete Road Code
This code extends the traffic management system to handle a complete four-road intersection.  
- **Components Used:** Arduino Mega, ultrasonic sensors, four TM1637 displays, and LEDs for each road.  
- **Features:**  
  - Sequentially manages traffic signals for four roads.  
  - Adjusts signal timings based on traffic density detected by sensors.  
  - Displays countdown timers for each road independently.  
  - Skips empty roads to optimize traffic flow.
