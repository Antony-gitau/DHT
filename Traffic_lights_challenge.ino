int redled= 12;
int yellowled =8;
int greenled =3;
int redpass = 11;
int yellowpass = 7;
int greenpass = 5;

int dt =3000;
int dt2 = 1500;

void setup() {
  // put your setup code here, to run once:
pinMode(redled, OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(redpass,OUTPUT);
pinMode(yellowpass,OUTPUT);
pinMode(greenpass,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//red is on for drivers to stop
//green is on for pedestrians to cross
digitalWrite(redled, HIGH);
digitalWrite(yellowled, LOW);
digitalWrite(greenled, LOW);
digitalWrite(redpass, LOW);
digitalWrite(yellowpass, LOW);
digitalWrite(greenpass, HIGH);
//keep the light on for a while
delay(dt);

//red and yellow are on for motorist to get ready to drive
//green and yellow are on for pedestrians to get ready to stop
digitalWrite(redled,HIGH);
digitalWrite(yellowled,HIGH);
digitalWrite(greenled, LOW);
digitalWrite(redpass, LOW);
digitalWrite(yellowpass, HIGH);
digitalWrite(greenpass, HIGH);
//keep the light on for a while
delay(dt2);

//green is on for drivers to move
//red is on for pedestrians to stops
digitalWrite(redled,LOW);
digitalWrite(yellowled,LOW);
digitalWrite(greenled, HIGH);
digitalWrite(redpass, HIGH);
digitalWrite(yellowpass, LOW);
digitalWrite(greenpass, LOW);
//keep the light on for a while
delay(dt);

//red and yellow is on for pedestrians to get ready to cross
//green yellow is on for motorists to prepare to stop
digitalWrite(redled,LOW);
digitalWrite(yellowled,HIGH);
digitalWrite(greenled, HIGH);
digitalWrite(redpass, HIGH);
digitalWrite(yellowpass, HIGH);
digitalWrite(greenpass, LOW);
//keep the light on for a while
delay(dt2);


}
