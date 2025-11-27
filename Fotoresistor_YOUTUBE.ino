                                                                    
const int analogPin = A0;
const int ledCount = 9;
int ledPins[] = { 13, 12, 11, 10, 6, 5, 4, 3, 2 };
int analogValue = 0;
int thisLed = 0;
int ledB = 8 ; 
void setup() {
  
for (int thisLed = 0; thisLed < ledCount; thisLed++) {
pinMode(ledPins[thisLed], OUTPUT);
Serial.begin (9600);
}}

void loop() {

int sensorReading = analogRead(analogPin);
int ledLevel = map(sensorReading, 400, 800, 0, ledCount);
for (int thisLed = 0; thisLed < ledCount; thisLed++) {
if (thisLed < ledLevel) {
digitalWrite(ledPins[thisLed], LOW);
digitalWrite(ledB, HIGH);
}
else {
digitalWrite(ledPins[thisLed], HIGH);
digitalWrite(ledB, LOW);
Serial.println (analogValue);
}}}
