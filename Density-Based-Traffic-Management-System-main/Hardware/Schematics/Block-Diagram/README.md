# Block Diagram for Single Road

This [Block Diagram](./Single-Road/DBTMS-Block-Diagram-for-Single-road.JPG) is designed to sense whether a vehicle is present and to measure the distance to any object within its range. For a single road, there are three possible conditions: 

1. If only the first sensor detects a vehicle, it indicates low traffic density, and the Arduino will allocate less time for traffic clearing.
2. If both sensors detect vehicles, it signifies higher traffic volume, prompting the system to adjust and allocate more time to clear the road.
3. If neither sensor detects a vehicle, the timer will turn off, and a red light will activate to signal a stop.

This system ensures that road operations are always aligned with real-time traffic conditions.

---

# Block Diagram for Complete System

This [Block Diagram](./Complete-System/DBTMS-Block-Diagram-for-all-roads.JPG) consists of four road modules, each equipped with ultrasonic sensors, red, yellow, and green LEDs, and four seven-segment displays functioning as timers. All these components are connected to an Arduino Mega microcontroller, which serves as the central controller for processing sensor data and activating the corresponding light sequences and timers for each road. 

The roads operate in a sequenced manner based on four specific conditions:

1. If only the first sensor detects a vehicle, it indicates low traffic density and less time is allocated by the Arduino.
2. If both sensors detect vehicles, indicating higher traffic density, the system adjusts to allocate more time to clear the road.
3. If none of the sensors detects vehicles, the timer is turned off, and a red light is activated to stop traffic, thereby preventing accidents.
4. If any road shows no traffic detected, the system will skip it, reducing unnecessary waiting time and enhancing the efficiency of the traffic signals.

This timer system provides a more user-friendly experience, increasing predictability. The dynamic adjustments to traffic conditions create a comprehensive system that improves urban traffic management, reducing congestion, fuel consumption, and emissions.

---
