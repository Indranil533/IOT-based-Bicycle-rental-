# IoT-Based Bicycle Project

## Overview

This project showcases an IoT-based bicycle system implemented using an ESP-32 microcontroller. The system is programmed using the Arduino IDE, and HTML is used to create the web pages hosted on a local WiFi network. Users can interact with these web pages to access various functionalities and data provided by the bicycle's sensors.

## Components and Functionality

### Sensors and Actuators

- **MPU 6050 (Gyroscope):** Determines the orientation of the bicycle.
- **NEO 6M (GPS):** Provides the location data of the bicycle.
- **Hall Sensor (KY 024):** Measures the distance traveled by counting each rotation of the wheel.
- **Servo Motor (SG 90):** Controls the locking mechanism of the bicycle.

### Microcontroller

- **ESP-32:** Serves as the main microcontroller, connecting all sensors and actuators, and hosts the web pages on a local server.

## Features

1. **Orientation Tracking:** The MPU 6050 gyroscope tracks and reports the orientation of the bicycle.
2. **Location Tracking:** The NEO 6M GPS module provides real-time location data.
3. **Distance Measurement:** The Hall Sensor counts wheel rotations to calculate the distance traveled.
4. **Locking Mechanism:** The SG 90 servo motor is used to lock and unlock the bicycle.
5. **Web Interface:** The ESP-32 hosts web pages accessible over a local WiFi network, allowing users to interact with the bicycle's system and view sensor data.

## Implementation Details

1. **Programming:** The system is programmed using the Arduino IDE.
2. **Web Pages:** HTML is used to create the web interface for user interaction.
3. **Local Server:** The ESP-32 hosts the web pages on a local server, providing an interface for users to access and control the bicycle's features.

## Usage

1. **Connect to the Local WiFi Network:** Ensure your device is connected to the local WiFi network hosted by the ESP-32.
2. **Access the Web Interface:** Open a web browser and navigate to the ESP-32's local IP address to access the bicycle's web pages.
3. **Interact with the System:** Use the web interface to view sensor data, track the bicycle's orientation and location, measure the distance traveled, and control the locking mechanism.


Feel free to clone this repository and explore the code to understand the implementation details and adapt it for your own projects.
