# Data Flow Diagram (DFD) Explanation

This document explains the DFD diagrams included in the project.

## DFD Level 0 (Context Diagram)
This diagram represents the high-level overview of the system.
- User sends and receives messages using the system.
- The entire system is shown as a single process.
- Shows interaction between users and the offline communication system.

![diagrams/DFD Level 0.png](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/diagrams/DFD%20Level%200.png?raw=true)

## DFD Level 1 (System Breakdown)
This diagram breaks the system into major components:
- Mobile Application
- Microcontroller
- LoRa Module
- Receiving Device
- Other User

It explains how data flows from the user to the app, then to the device, transmitted over LoRa, and finally displayed to the receiver.

![diagrams/DFD Level 1.png](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/diagrams/DFD%20Level%201.png?raw=true)

## DFD Level 2 (Detailed Flow)
This is the most detailed diagram and shows internal processing such as:
- Device authentication
- USB-OTG connection handling
- Nearby device discovery
- User selection for communication
- Message encoding and decoding
- LoRa transmission and reception
- GPS data attachment
- Optional external messaging bridge integration

These diagrams together demonstrate clear system understanding and design planning.

![diagrams/DFD Level 1.png](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/diagrams/DFD%20Level%202.png?raw=true)
