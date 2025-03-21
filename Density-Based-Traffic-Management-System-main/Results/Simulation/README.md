# Simulation Results

## Overview
This directory contains the results from simulations of the **Density-Based Traffic Management System**. The simulations validate the system's functionality under various traffic conditions, demonstrating its ability to dynamically adjust signal timings and optimize traffic flow.

---

## Simulation Scenarios
[1. **Single-Road Simulation:**](./Single-Road)
   - Simulates traffic signal control for a single road.  
   - Tests for three conditions: no traffic, low traffic density, and high traffic density.  
   - Validates sensor-based signal timing and countdown display.  

[2. **Complete System Simulation:**](./Complete-System)
   - Simulates the operation of the full four-road intersection.  
   - Tests scenarios where roads have varying traffic densities.  
   - Demonstrates sequential road processing and skipping of empty roads.  

---

## Results Highlights
- **No Traffic:** Red light stays on, timers are off, and empty roads are skipped to minimize wait time.  
- **Low Traffic Density:** Green light for 5 seconds, yellow for 5 seconds, and a countdown timer of 10 seconds.  
- **High Traffic Density:** Green light for 10 seconds, yellow for 5 seconds, and a countdown timer of 15 seconds.  

---

## Usage
- Open the provided simulation result files or screenshots to understand system behavior under different conditions.  
- Use the results for further analysis and validation of system performance.

---

## Conclusion
These simulations demonstrate that the Density-Based Traffic Management System effectively adapts to real-time traffic conditions, reducing congestion and optimizing urban traffic flow.
