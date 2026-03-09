Drowsiness Alert (IR Sensor):   
#include <ESP8266WiFi.h>   
#include <BlynkSimpleEsp8266.h>   
   
#define BLYNK_TEMPLATE_ID " ESP8266WiFi "   
#define BLYNK_DEVICE_NAME "DrowsinessMonitor"   
#define BLYNK_AUTH_TOKEN " xYz1234ABC5678DEFghIJklmnOPQRstu"   
   
char auth[] = BLYNK_AUTH_TOKEN;  
char ssid[] = "iot”; char pass [] = "12345678”;     
   
#define IR_PIN D7   
#define BUZZER_PIN D8   
#define VIBRATION_PIN D4   
#define VPIN_ALERT V1   
   
void setup () {   
 Serial.begin(115200);   Blynk.begin(auth,ssid, pass);  pinMode(IR_PIN, INPUT);  pinMode(BUZZER_PIN, OUTPUT);   pinMode(VIBRATION_PIN, OUTPUT);   digitalWrite(BUZZER_PIN, LOW);   digitalWrite(VIBRATION_PIN, LOW);   
}   
   
void loop ()  {    Blynk.run();    int irStatus =  digitalRead(IR_PIN);    if(irStatus == 0) {   
digitalWrite(BUZZER_PIN, HIGH);      digitalWrite(VIBRATION_PIN, HIGH);      
Blynk.virtualWrite(VPIN_ALERT, "RED");   
  } else {   
    digitalWrite(BUZZER_PIN, LOW);          digitalWrite(VIBRATION_PIN, LOW);   
    Blynk.virtualWrite(VPIN_ALERT, "GREEN");   
  }   
  delay(1000);   
}   
   
Alcohol Alert:   
   
#include <ESP8266WiFi.h>   
#include <BlynkSimpleEsp8266.h>   
   
#define BLYNK_TEMPLATE_ID " ESP8266WiFi "   
#define BLYNK_DEVICE_NAME "AlcoholMonitor"   
#define BLYNK_AUTH_TOKEN " xYz1234ABC5678DEFghIJklmnOPQRstu "   
   
char auth[] = BLYNK_AUTH_TOKEN;   
char ssid[] = "iot";    char pass[] = "123456789";     
   
#define ALCOHOL_PIN D6   
#define BUZZER_PIN D8   
#define VPIN_ALERT V1   
   
void setup() {   
  Serial.begin(115200);   
  Blynk.begin(auth, ssid, pass);   
  pinMode(ALCOHOL_PIN, INPUT);     pinMode(BUZZER_PIN, OUTPUT);          
digitalWrite(BUZZER_PIN, LOW);   
}   
 
   
void loop()  	{    Blynk.run();    
 int alcoholStatus = digitalRead(ALCOHOL_PIN);    if(alcoholStatus == 0) {         digitalWrite(BUZZER_PIN, HIGH);   
    Blynk.virtualWrite(VPIN_ALERT, "RED");   
  } else {   
    digitalWrite(BUZZER_PIN, LOW);   
    Blynk.virtualWrite(VPIN_ALERT, "GREEN");   
  }   
  delay(1000);   
}   
   
Smoke Alert:   
#include <ESP8266WiFi.h>   
#include <BlynkSimpleEsp8266.h>   
   
#define BLYNK_TEMPLATE_ID " ESP8266WiFi "   
#define BLYNK_DEVICE_NAME "SmokeMonitor"   
#define BLYNK_AUTH_TOKEN " xYz1234ABC5678DEFghIJklmnOPQRstu "   
   
char auth[] = BLYNK_AUTH_TOKEN;  
 char ssid[] = "iot";    char pass[] = "123456789";     
   
#define SMOKE_PIN D5   
#define BUZZER_PIN D8   
#define VPIN_ALERT V1   
   
void setup() {   
  Serial.begin(115200);   
  Blynk.begin(auth, ssid, pass);   
  pinMode(SMOKE_PIN, INPUT);  
 pinMode(BUZZER_PIN, OUTPUT);   
digitalWrite(BUZZER_PIN, LOW);   
}   
   
void loop()  {    Blynk.run();    int smokeStatus = digitalRead(SMOKE_PIN);   if(smokeStatus == 0) {         digitalWrite(BUZZER_PIN, HIGH);   
 Blynk.virtualWrite(VPIN_ALERT, "RED");   
  } else {   
    digitalWrite(BUZZER_PIN, LOW);   
    Blynk.virtualWrite(VPIN_ALERT, "GREEN");   
  }   
  delay(1000);   
}   
