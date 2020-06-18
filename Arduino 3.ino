//ultrasonic

#define echoPin A1
#define trigPin A2

#include <Wire.h>

long duration, distance; //waktu untuk kalkulasi jarak

//gas
int smoke = A0;
int LED1 = 5;
int LED2 = 6;
int LED3 = 7;

//TILT
int tilt = A3;

void setup() {
  Serial.begin(9600); //mulai serial begin
  Wire.begin(3);      //kasih alamat ke Arduino satu ini   
  Serial.begin (9600); 
  pinMode(trigPin, OUTPUT); //inisiasi pin I/O
  pinMode(echoPin, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(smoke, INPUT);
  pinMode(tilt, INPUT);
}
 
void loop() {
  
  
  //ultrasonic
  
  digitalWrite(trigPin, LOW);delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  //Serial.println(distance);
  if (distance > 199){  			//kondisi untuk distance
  	digitalWrite(LED1, HIGH);
  }
  if (distance <= 199){
    digitalWrite(LED1, LOW);
  }
   Wire.onRequest(requestEvent); //untuk menangani request dari Master
  delay(5000);  
  //gas
  int gassensor = analogRead(smoke);
  //Serial.println(gassensor);
  if (gassensor > 500){
  	digitalWrite(LED2, HIGH);
  }
  if (gassensor < 500){
    digitalWrite(LED2, LOW);
  }
  
  
  //TILT
  int tiltsensor = digitalRead(tilt); //untuk sensor tilt
  if (tiltsensor == HIGH){
  	digitalWrite(LED3, HIGH);
  }
  if (tiltsensor == LOW){
    digitalWrite(LED3, LOW);
  }
  
  
  delay(100);
}

void requestEvent() {			//handler dari request event 
  Wire.write(distance); 
  Serial.println("Sent");
}
