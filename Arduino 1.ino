#include <IRremote.h>
#include "pins_arduino.h"
#include <Wire.h>

// RC and IR Sensor
int RECV_PIN = 3;//Pin should be PWM
IRrecv irrecv(RECV_PIN);
decode_results results;
int led1 = 1;

// Photoresistor
int sensorValue = 0;


// Temperature Sensor
int baselineTemp = 0;
int celsius = 0;
int fahrenheit = 0;

void setup()
{
	// RC dan IR Sensor
	Serial.begin(9600); //mulai serial begin
  	Wire.begin(2);      //kasih alamat ke Arduino satu ini   
	irrecv.enableIRIn(); // Start the receiver
	pinMode(13, OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(9,OUTPUT);
	pinMode(10,OUTPUT);
	pinMode(11,OUTPUT);
	digitalWrite(13, HIGH);

	// Photoresistor
	pinMode(A0, INPUT);
	pinMode(7, OUTPUT);

	// Temperature Sensor
	pinMode(A1, INPUT);
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);
}
void loop()
{
	if (irrecv.decode(&results))
	{
		switch(results.value)
		{
			case 16615543: Serial.println("Forward"); // Button 2
				digitalWrite(8,LOW);
				digitalWrite(9,HIGH);
				digitalWrite(10,LOW);
				digitalWrite(11,HIGH);
				break;
			case 16591063: Serial.println("Left"); // Button 4
				digitalWrite(8,HIGH);
				digitalWrite(9,LOW);
				digitalWrite(10,LOW);
				digitalWrite(11,HIGH);
				break;
			case 16623703: Serial.println("Stop"); // Button 5
				digitalWrite(8,HIGH);
				digitalWrite(9,HIGH);
				digitalWrite(10,HIGH);
				digitalWrite(11,HIGH);
				break;
			case 16607383: Serial.println("Right"); // Button 6
				digitalWrite(8,LOW);
				digitalWrite(9,HIGH);
				digitalWrite(10,HIGH);
				digitalWrite(11,LOW);
				break;
			case 16619623: Serial.println("Back"); // Button 8
				digitalWrite(8,HIGH);
				digitalWrite(9,LOW);
				digitalWrite(10,HIGH);
				digitalWrite(11,LOW);
				break;
			default: Serial.println(results.value);
		}
		irrecv.resume(); // Receive the next value
	}
  
	// Photoresistor
	// read the value from the sensor
	sensorValue = analogRead(A0);
	// print the sensor reading so you know its range
	Serial.println(sensorValue);
	if (sensorValue < 800)					// Night
	{
		digitalWrite(7, LOW);
	}

	else									// Day
	{
		digitalWrite(7, HIGH);
	}

	delay(100); // Wait for 100 millisecond(s)

	// Temperature Sensor
	baselineTemp = 40;

	celsius = map(((analogRead(A1) - 20) * 3.04), 0, 1023, -40, 125);

	fahrenheit = ((celsius * 9) / 5 + 32);
	Serial.print(celsius);
	Serial.print(" C, ");
	Serial.print(fahrenheit);
	Serial.println(" F");

	if (celsius < baselineTemp)
	{
		digitalWrite(6, LOW);
		digitalWrite(5, LOW);
		digitalWrite(4, LOW);
	}
  
	if (celsius >= baselineTemp && celsius < baselineTemp + 10)
	{
		digitalWrite(6, HIGH);
		digitalWrite(5, LOW);
		digitalWrite(4, LOW);
	}

	if (celsius >= baselineTemp + 10 && celsius < baselineTemp + 20)
	{
		digitalWrite(6, HIGH);
		digitalWrite(5, HIGH);
		digitalWrite(4, LOW);
	}

	if (celsius >= baselineTemp + 20)
	{
		digitalWrite(6, HIGH);
		digitalWrite(5, HIGH);
		digitalWrite(4, HIGH);
	}

	delay(1000);
    Wire.onRequest(requestEvent); // untuk menangani reuestEvent 
  	delay(200);
}

void requestEvent() { 		//handler untuk requestEvent
  Wire.write(celsius); 
  Serial.println("Sent");
}