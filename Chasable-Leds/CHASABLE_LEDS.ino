int ledpins[]={2,3,4,5,6,7,8,9,10};
int longdelay=2000;
int shortdelay=500;
void setup() {
  // put your setup code here, to run once:
for (int leds=0; leds<9;leds++){
 pinMode(ledpins[leds],OUTPUT);
  
}
}

void loop() {
  // put your main code here, to run repeatedly:

  //first patterm
for(int thisled=1; thisled<=10; thisled++)
{
digitalWrite(thisled,HIGH);
delay(shortdelay);
digitalWrite(thisled,LOW);
delay(shortdelay);
}
for(int thisled=10; thisled>=1; thisled--)
{
digitalWrite(thisled,HIGH);
delay(shortdelay);
digitalWrite(thisled,LOW);
delay(shortdelay);
}
delay(longdelay);


//second pattern

for(int thisled=1; thisled<10;thisled++){
  digitalWrite(thisled,HIGH);
  delay(shortdelay);
}

for (int thisled=1;thisled<10;thisled++){
  digitalWrite(thisled,LOW);
  delay(shortdelay);
}

for(int thisled=10; thisled>1;thisled--){
  digitalWrite(thisled,HIGH);
  delay(shortdelay);
}

for (int thisled=10; thisled>1; thisled--){
  digitalWrite(thisled,LOW);
  delay(shortdelay);
}
delay(longdelay);

//third pattern
for (int thisled=10; thisled>1; thisled--){
  digitalWrite(thisled,HIGH);
  delay(shortdelay);
}

for (int thisled=10; thisled>1; thisled--){
 digitalWrite(thisled,LOW);
 delay(shortdelay); 
}

for (int thisled=1; thisled<10; thisled++){
  digitalWrite(thisled,HIGH);
  delay(shortdelay);
  
}

for (int thisled=1; thisled<10; thisled++){
  digitalWrite(thisled,LOW);
  delay(shortdelay);
}
delay(longdelay);


}
