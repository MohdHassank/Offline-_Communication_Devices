#include <SoftwareSerial.h>
#define LORA_RX 2
#define LORA_TX 3
                                                                                                          
SoftwareSerial LoRaSerial(LORA_RX, LORA_TX);  
const int DEVICE_ADDRESS = 1;                 
const int TARGET_ADDRESS = 2;                                  

String userInput = "";

void setup() {
  Serial.begin(9600);
  LoRaSerial.begin(115200);
  delay(2000);
  
  LoRaSerial.print("AT+ADDRESS=");
  LoRaSerial.println(DEVICE_ADDRESS);
  delay(300);
 
  LoRaSerial.println("AT+NETWORKID=5");
  delay(300);
  Serial.println("LoRa Chat Ready. Type to send:");
}


void loop() {
  
  if (Serial.available()) {
    userInput = Serial.readStringUntil('\n');
    userInput.trim();
    if (userInput.length() > 0) {
      String cmd = "AT+SEND=" + String(TARGET_ADDRESS) + "," + String(userInput.length()) + "," + userInput;
      LoRaSerial.println(cmd);
      Serial.println("📤 Sent: " + userInput);
    }
  }
 

  if (LoRaSerial.available()) {
    String incoming = LoRaSerial.readStringUntil('\n');
    Serial.println("📥 Received: " + incoming);
  }
}