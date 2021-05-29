#include <Servo.h>

const int trigPin = 9;
const int echoPin = 8;

long duration;
int distinCM;

Servo radarServo;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  radarServo.attach(10);
}
void loop() 
{
  for(int i=0;i<=160;i++)
  {
    radarServo.write(i);
    delay(30);
    
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(7);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distinCM = duration*0.034/2;
    
    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
  }
  
  for(int i=160;i>=0;i--)
  {
    radarServo.write(i);
    delay(50);
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(7);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distinCM = duration*0.034/2;
    
    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
  }
}
