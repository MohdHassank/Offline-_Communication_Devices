# Database Design (Logical Schema)

Although the current prototype does not use a live backend database, a logical data model has been designed for scalability and future implementation.

## Entities and Structure

### User
- user_id (Primary Key)
- username

### Device
- device_id (Primary Key)
- user_id (Foreign Key)
- device_name

### Message
- message_id (Primary Key)
- sender_id
- receiver_id
- content
- timestamp

### Location
- location_id (Primary Key)
- device_id
- latitude
- longitude
- timestamp

## Purpose
This schema allows:
- User-to-device mapping
- Message history storage
- Location sharing support
- Easy expansion for cloud sync or analytics in future

This design ensures the system can scale when connected to a backend infrastructure.
![image]([https://user-images.githubusercontent.com/....png](https://github.com/MohdHassank/Offline-_Communication_Devices/blob/main/diagrams/Database%20Schema.png?raw=true))
