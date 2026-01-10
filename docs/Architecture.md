## The proposed system is designed with a hardware communication layer and a mobile application layer that work together to enable completely offline messaging. The architecture is based on LoRa communication supported by a microcontroller.

The system consists of the following major components:

Mobile Application- LoRaMesh (Java-based Android App)

Microcontroller Unit (Arduino Nano / ESP32-C3)

LoRa Transceiver Module

Another User Device with the Same Setup

🔹 1. Mobile Application Layer

The Android app acts as the user interface of the system.

Functions of the mobile app:

connects to the hardware device

scans and displays nearby LoRa devices/users

allows user to select a person to chat with

sends typed messages to hardware

displays received messages

The app is developed in Java, making it simple, lightweight, and compatible with most Android phones.

🔹 2. Microcontroller Layer

The microcontroller is the main controller (brain) of the system.

it receives data from the mobile app

it processes the text message

it adds addressing information (sender ID and receiver ID)

it communicates with the LoRa module

it receives incoming messages and sends them back to the mobile app

🔹 3. LoRa Communication Layer

This layer is responsible for long-range, offline wireless communication.

LoRa module transmits the message as radio signal

no internet / tower / SIM required

works directly device-to-device

consumes very low power

LoRa performs:

modulation and demodulation

packet transmission

long-distance range support

🔹 4. Receiver Side Architecture

The receiver side contains the same components:

mobile app

microcontroller

LoRa module

When a message is received:

LoRa module receives signal

microcontroller decodes message

sends data to user’s mobile app

message is displayed to user

![Demo Image]([<img width="1408" height="768" alt="image" src="https://github.com/user-attachments/assets/703fda77-2d04-4e42-be64-41b264fdf86c" />
)](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/images/Images/system_arcitecture.png?raw=true)
