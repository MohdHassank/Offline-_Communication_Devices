
# Offline Communication Device


##### Theme- Open Innovation


This project is about creating a small device that allows people to send and receive text messages without internet, Wi-Fi, or mobile network. It uses LoRa long-range CSS radio technology to communicate between two or more users. The system is mainly designed for situations where normal communication fails, such as disasters or remote areas.


## Problem Statement
Communication completely stops when mobile networks and internet services fail. This commonly happens during floods, earthquakes, heavy storms, power failures, and in remote rural or hilly areas where mobile towers are not present. In such situations, people cannot contact family members, rescue teams cannot coordinate properly, and emergency information cannot be delivered.

Therefore, there is a strong need for a simple, reliable offline communication system that can send basic text messages without depending on telecom networks.
## Objectives of the project


1) To provide communication without internet or SIM network

2) To support disaster management and rescue operations

3) To enable long-range text messaging using LoRa technology

4) To design a portable and low-cost communication device

5) To make a system that is easy to use and consumes very low power
## Proposed solution
We have developed an offline communication system that continues to work even when mobile networks and internet services are unavailable, such as during disasters and in no-network zones. Our solution is completely independent of SIM cards, Wi-Fi, or any external network infrastructure.

The solution consists of two main parts:

a dedicated hardware communication device, and

a mobile application developed in Java

🔹 Hardware Device

We have designed and built a portable hardware device that is the main brain of the project.
This device contains:

* a microcontroller (Arduino Nano / ESP32-C3)

* a LoRa transceiver module

The microcontroller controls all the operations and processes the data, while the LoRa module enables long-range wireless communication between users completely offline. Each user carries one device, and devices communicate directly through LoRa radio signals instead of relying on telecom towers.

🔹 Mobile Application- LoRaMesh (Java Based)

To make the system user-friendly, we have also developed an Android application using Java.
The app allows the user to:

* type messages

* read received messages

* connect with our hardware device

* communicate without internet

The app communicates with the hardware device through serial communication, and the hardware handles LoRa transmission and reception.

### How the solution works – step by step


1) First, the user connects the hardware device to the mobile phone.

2) After connecting, the user opens the mobile application.

3) Inside the app, the user scans and selects a nearby device or person to chat with.

4) Once the device is selected, the system successfully establishes a connection between both users.

5) After successful connection, both users can chat with each other completely offline using our app.

6) All the messages are transferred through our LoRa-based hardware device, without internet or mobile network.

**Thus, two users communicate completely offline.**
## Features

1) Completely Offline: Works without internet or mobile network.

2) Long Range: Long range communication upto 15km.

3) Low cost compared to satellite phones, Walkie-Talkie and other devices.

4) Very low power consumption.

5) Location Sharing: We are also able to share our exact gps coordinate to help in rescues. 

6) Portable and easy to carry: Small and compact in size which  is easily carry during disasters and in emergency situations.




## Technology Stack

✔ Hardware Section

* Microcontroller (Arduino/ESP32/ATmega based)

       ESP32 C3
       Arduino Nano






* LoRa Module (RYLR/SX1276/SX1262 etc.)
          
          Reyax RLY998
          Lora SX1276

* Connectors 

       OTG Connector
       Arduino Connectors

* wires

      Jumper wires
      Connecting Wires

✔ Software Section

* Arduino IDE

* Serial monitor 

* LoRa communication library

              SoftwareSerial.h
              HardwareSerial (built-in)


* Android Studio

* Figma or Canva
## System Architecture 


The proposed system is designed with a hardware communication layer and a mobile application layer that work together to enable completely offline messaging. The architecture is based on LoRa communication supported by a microcontroller.

The system consists of the following major components:

* Mobile Application- LoRaMesh (Java-based Android App)

* Microcontroller Unit (Arduino Nano / ESP32-C3)

LoRa Transceiver Module

Another User Device with the Same Setup

🔹 1. Mobile Application Layer

* The Android app acts as the user interface of the system.

* Functions of the mobile app:

* connects to the hardware device

* scans and displays nearby LoRa devices/users

* allows user to select a person to chat with

* sends typed messages to hardware

* displays received messages

The app is developed in Java, making it simple, lightweight, and compatible with most Android phones.

🔹 2. Microcontroller Layer

* The microcontroller is the main controller (brain) of the system.

* it receives data from the mobile app

* it processes the text message

* it adds addressing information (sender ID and receiver ID)

* it communicates with the LoRa module

* it receives incoming messages and sends them back to the mobile app



🔹 3. LoRa Communication Layer

 This layer is responsible for long-range, offline wireless communication.

* LoRa module transmits the message as radio signal

* no internet / tower / SIM required

* works directly device-to-device

* consumes very low power

* LoRa performs:

* modulation and demodulation

* packet transmission

* long-distance range support

🔹 4. Receiver Side Architecture

The receiver side contains the same components:

* mobile app

* microcontroller

* LoRa module

* When a message is received:

* LoRa module receives signal

* microcontroller decodes message

* sends data to user’s mobile app

* message is displayed to user


![App Screenshot](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/images/Images/system_arcitecture.png?raw=true)


## Budget

💰 Budget and Cost Analysis

The total manufacturing cost for two devices (one pair) is:

👉 Total Cost = ₹1489 (for two devices)

This includes all the electronic components and casing required to build a working pair of offline LoRa communication devices.

![App Screenshot](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/images/Images/Budget.png?raw=true)

**🔹 Cost Per Device**

Since ₹1489 is for two devices:

 Cost per device ≈ ₹745

**🏷️ Selling Price**

The pair of two devices will be sold at:

👉 Selling Price = ₹2000 per pair

**📈 Profit Analysis**

Manufacturing cost per pair = ₹1489

Selling price per pair = ₹2000

👉 Profit per pair = ₹2000 − ₹1489 = ₹511

Profit percentage on cost ≈ 34%

Profit margin on selling price ≈ 25.5%
## Prototype

##### LoraMesh App

![alt](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/images/Images/App%20UI.png?raw=true)

##### LoraMesh Device

![alt](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/images/Images/Hardware%20Device.png?raw=true)

#####  Demo Video

[▶️ Click here to watch the demo video](https://drive.google.com/file/d/1gsXFa64tElPXJXZhJ_LYHP2dL0s99RwS/view?usp=sharing)

## How user use it?


The system is designed so that even a non-technical user can operate it easily during disaster or no-network conditions. The complete usage process is explained step by step below.

🔹 Step 1 — Connect the device with the mobile phone

The user connects the mobile phone to the device using:

                            USB-OTG cable

Once connected, the phone establishes communication with the microcontroller.

🔹 Step 2 — Open the mobile application

The user opens the Android application.

The app automatically detects the connected hardware device.

A simple interface is shown with:

                             Nearby users



🔹 Step 4 — Select nearby user/device



* A list of nearby users/devices is shown.

* The user selects the person they want to chat with.

* Connection is then successfully established.

🔹 Step 5 — Start chatting offline

* The user types the message inside the app chat screen.

* The app sends message to another device.



**Now both users can chat completely offline.**




![App Screenshot](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/images/Images/working%20of%20device.png?raw=true)

## Future enhancements (For Round- 2)

In Round 2, we aim to transform the current functional prototype into a complete, user-friendly, field-ready solution. The focus will be on improving usability, features, range, and robustness while keeping the system fully offline.

**🌟 1. Modern and User-Friendly Mobile UI**

We will redesign the mobile application with a clean and interactive chat interface similar to popular messaging apps.

Planned UI upgrades:

* neat chat bubbles





* delivered/read indicators (offline logic)


* clear device connection status

Goal: even a non-technical user in a disaster can use it easily.

**🗨️ 2. Official WhatsApp offline messaging**

We will extend from basic chat to a feature-rich to use whatsapp offline with use of third person (without internet).

Users will be able to:

* Send messages through Whatsapp (Without internet, bluetooth, Wi-Fi)
* This feature uses third person mode.
* 


**🖼️ 3. Offline Image and File Sharing**

We will support transfer of:

* images

* PDF/text files

* small documents

Technical approach:

* compress file

* split into data packets

* send sequentially through LoRa

* reassemble at receiver side

Use cases:

1) share disaster site photos

2) offline document exchange

3) sending ID proof or medical info
**📡 4. Increased Communication Range**

We will improve range through:

* high-gain antennas

* tuning spreading factor and bandwidth

* adding relay nodes

* optional mesh networking

Expected result:


* wide-area emergency networks

* strong coverage in forests and hills
