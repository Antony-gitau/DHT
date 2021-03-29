#include<LiquidCrystal.h>//liquid crystal library
#include"DHT.h"//dht library call
#define DHTPIN 13 //pin connected to DHT

int rs=7, en=8, d4=9, d5=10, d6=11, d7=12;//pins connected to lcd
LiquidCrystal lcd( rs,en,d4,d5,d6,d7);//lcd object

#define DHTTYPE DHT11 //type of dht module
DHT dht(DHTPIN, DHTTYPE); //command the DHT.h

int trigpin=5;//hcsr04 trigger pin 
int echopin=6;////hcsr04 echo pin 
int pingtraveltime;

void setup() {
  // put your setup code here, to run once:
dht.begin();//start the sensor
lcd.begin(16,2);//start the lcd
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float h=dht.readHumidity(); //value for humidity
//float t=dht.readTemperature(true);//value for temperature
float t=dht.readTemperature();//value for temperature

//t=t*9/5 +32; //changing reading to fahrenheit

if (isnan(t) || isnan(h)){ //whether dht is working
  lcd.setCursor(0,0);
  lcd.print("failed to read from DHT");
}else{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print("c");
  
}

digitalWrite(trigpin,LOW);
delayMicroseconds(10);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
pingtraveltime=pulseIn(echopin,HIGH);
delayMicroseconds(25);
Serial.println(pingtraveltime);

delay(1000);
}
