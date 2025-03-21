# Block Diagram for Single Road

This [Block Diagram](./DBTMS-Block-Diagram-for-Single-road.JPG) is designed to sense whether a vehicle is present and to measure the distance to any object within its range. For a single road, there are three possible conditions: 

1. If only the first sensor detects a vehicle, it indicates low traffic density, and the Arduino will allocate less time for traffic clearing.
2. If both sensors detect vehicles, it signifies higher traffic volume, prompting the system to adjust and allocate more time to clear the road.
3. If neither sensor detects a vehicle, the timer will turn off, and a red light will activate to signal a stop.

This system ensures that road operations are always aligned with real-time traffic conditions.
