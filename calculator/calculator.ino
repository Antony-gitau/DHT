//use the lcd library
#include<LiquidCrystal.h> 

//define the pins connected to the lcd.
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;

//create the lcd object
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//global variables
float num1; //the first input
float num2; // the second input
float ans;   // the answer input
String operators; //the operator input. like + - / *

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

// asking for first number
lcd.setCursor(0,0);
lcd.print("input num 1 ");
while (Serial.available()== 0){
  
}
num1=Serial.parseFloat();

  //asking for a second number
lcd.clear(); //claer the screen on the lcd.
lcd.setCursor(0,0); //set the cursor on 0,0 axis
lcd.print("input num 2 "); //print on the lcd
while (Serial.available() == 0){  //wait for the input
  
}
num2=Serial.parseFloat(); //read the input
  
//asking for operator
lcd.clear();
lcd.setCursor(0,0);
lcd.print("operator choice?");
while (Serial.available() == 0){
  
}
operators=Serial.readString();


//doing the math

if (operators== "+"){
  ans=num1+num2;
}
if (operators== "-"){
  ans=num1-num2;
}
if (operators== "*"){
  ans=num1*num2;
}
if (operators== "/"){
  ans=num1/num2;
}

//print the math on the lcd.

lcd.clear();
lcd.setCursor(0,0);
lcd.print(num1);
lcd.print(operators);
lcd.print(num2);
lcd.print(" = ");
lcd.print(ans);

lcd.setCursor(0,1);
lcd.print("thank you");
delay(5000);
lcd.clear();




}
