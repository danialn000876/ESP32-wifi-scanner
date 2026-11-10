# ESP32 Wi-Fi Security Scanner

ESP32-based project for detecting open and unsecured Wi-Fi networks in real time.

## Overview
This system scans local Wi-Fi networks, extracts their parameters (SSID, RSSI signal strength), and checks their encryption type. If an open network (WIFI_AUTH_OPEN) is detected, an external buzzer triggers an audible alert.

## Hardware Components
* ESP32 Dev Board
* External Buzzer (connected to GPIO 23)
* USB Interface for Serial Monitoring (115200 baud)

## Setup & Deployment
1. Open danialproject01.ino in Arduino IDE.
2. Select the ESP32 Dev Module board and the correct COM port.
3. Upload the sketch to the board.
4. Open the Serial Monitor (Ctrl + Shift + M) set to 115200 baud to view real-time network logs.
