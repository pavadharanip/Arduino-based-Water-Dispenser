# ARDUINO BASED AUTOMATED HAND HYGIENE SYSTEM

**📌 Project Overview**

The Arduino-Based Smart Hand Washing System is an embedded systems project designed to improve hand hygiene through automatic water pump control and environmental temperature monitoring.

The system uses an IR sensor to detect hand presence, an LDR sensor to identify light conditions, a relay module to control the water pump, and a DHT11 sensor to monitor temperature. A buzzer provides an alert when the temperature reaches the configured threshold.

The system combines sensor-based automation with real-time monitoring to provide a simple and efficient hand-washing solution.

---

**🎯 Project Objectives**

- To automate water flow using an IR sensor.
- To control a water pump through a relay module.
- To use an LDR sensor to monitor light conditions.
- To monitor temperature using a DHT11 sensor.
- To activate a buzzer when the temperature reaches the specified threshold.
- To display sensor readings and system status through the Arduino Serial Monitor.

---

**✨ Features**

- Automatic Hand Detection: Detects hand presence using an IR sensor.
- Automatic Water Pump Control: Controls the water pump through a relay module.
- Timed Water Flow: Activates the pump for a predefined duration of 3 seconds.
- Light Detection: Monitors light conditions using an LDR sensor.
- Temperature Monitoring: Measures temperature using a DHT11 sensor.
- Temperature Alert: Activates a buzzer when the temperature reaches the configured threshold.
- Serial Monitoring: Displays temperature readings and system status.

---

**🛠️ Hardware Components Required**

Component| Quantity
Arduino Uno| 1
IR Sensor Module| 1
LDR Sensor Module| 1
DHT11 Temperature Sensor| 1
1-Channel Relay Module| 1
DC Water Pump| 1
Active Buzzer| 1
Jumper Wires| As required
Breadboard| 1
External Power Supply| 1

---

**🔌 Pin Connections**

Component| Arduino Pin
IR Sensor OUT| Digital Pin 7
LDR Sensor DO| Digital Pin 6
Relay IN| Digital Pin 5
Buzzer (+)| Digital Pin 4
DHT11 DATA| Digital Pin 3
Sensor VCC| 5V
Sensor GND| GND

Note: The relay and sensor modules should be connected according to their operating voltage and signal requirements.

---

![Smart Hand Washing System](Images/dht%20handwash.jpeg)

**⚙️ Working Principle**

The system operates through the following steps:

**1. Hand Detection**

- The IR sensor continuously detects the presence of a hand.
- When a hand is detected, the sensor sends a LOW signal (assuming an active-LOW IR module).
- Arduino checks the LDR condition before activating the water pump.

**2. Light Detection**

- The LDR sensor detects the surrounding light intensity.
- The Arduino reads the digital output of the LDR module.
- The system identifies the light condition based on the sensor output.

**3. Automatic Water Pump Control**

- When both hand detection and the required light condition are satisfied, Arduino activates the relay.
- The relay switches ON the water pump.
- Water flows for approximately 3 seconds.
- After 3 seconds, the relay switches OFF the pump.
- The system waits for the hand to be removed before accepting another detection.

**4. Temperature Monitoring**

- The DHT11 sensor measures the surrounding temperature.
- Arduino reads the temperature using the DHT library.
- The temperature value is displayed in the Serial Monitor.

**5. Buzzer Alert**

- The measured temperature is compared with the predefined threshold.
- When the temperature reaches or exceeds the threshold, the buzzer is activated.
- Otherwise, the buzzer remains OFF.

---

💻 Software Requirements

- Arduino IDE
- Arduino C/C++ programming
- Adafruit DHT Sensor Library
- Adafruit Unified Sensor Library

**Libraries Used**

#include <DHT.h>

[Automated Handwash System Code](automated%20handwash.ino)

---

**📟 Serial Monitor Output**

The Arduino Serial Monitor displays the system's operating status and temperature readings.

**Example output:**

Light is ON
Hand Detected
TEMPERATURE: 29.00 C
Buzzer OFF

Light is ON
TEMPERATURE: 33.00 C
Buzzer ON

The actual output depends on sensor readings and the configured temperature threshold

---

**🚀 Applications**

- Public washrooms
- Educational institutions
- Hospitals and healthcare facilities
- Offices and workplaces
- Automated hygiene systems

---

**🔮 Future Improvements**

- Implement continuous temperature monitoring without blocking delays.
- Introduce an LCD display to show real-time temperature readings.
- Add an ultrasonic sensor for improved hand detection.
- Integrate IoT-based monitoring using ESP32.
- Add water-level monitoring to prevent dry running of the pump.
- Improve water conservation through optimized pump control.

---

**📚 Learning Outcomes**

Through this project, I gained practical knowledge of:

- Arduino programming and embedded systems.
- Digital input and output operations.
- IR and LDR sensor interfacing.
- Relay-based electrical load control.
- DHT11 temperature sensor interfacing.
- Conditional statements and delay functions.
- Serial communication and real-time sensor monitoring.
  
**⭐ Acknowledgement**

This project was developed as a hands-on embedded systems learning project to understand sensor interfacing, automation, and hardware control using Arduino.
