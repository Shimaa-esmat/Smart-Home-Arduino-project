#include<SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial myserial(0,1); // RX, TX

unsigned int ir = 13;
unsigned int led1 = 9;
unsigned int led2 = 8;
unsigned int led3 = 7;
unsigned int led4 = 6;
unsigned int motor = 5;
unsigned int green = 3;
unsigned int red = 4;
unsigned int servo =10;

Servo myservo;


char input ;


 void setup()
 {
  
Serial.begin(9600);
myserial.begin(9600);

myservo.attach(servo);
 pinMode(ir, INPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(motor, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(red, OUTPUT);

 }

void loop() {

 myservo.write(0);
// if( myserial.available()>0)
 if( Serial.available()>0)
  {
// Read the incoming character and control devices using bluetooth 
//    input = myserial.read();    
    input = Serial.read();
  }
  switch( input)
  {
    case 'A':
    digitalWrite(led1, HIGH);
    break;
    case 'a':
    digitalWrite(led1, LOW);
    break;
    
    case 'B':
    digitalWrite(led2, HIGH);
    break;
    case 'b':
    digitalWrite(led2, LOW);
    break;

    case 'C':
    digitalWrite(led3, HIGH);
    break;
    case 'c':
    digitalWrite(led3, LOW);
    break;
    
    case 'D':
    digitalWrite(led4, HIGH);
    break;
    case 'd':
    digitalWrite(led4, LOW);
    break;

    case 'M':
    digitalWrite(motor, HIGH);
    break;
    case 'm':
    digitalWrite(motor, LOW);
    break;

    case 'E' :
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    myservo.write(90);
    delay(500);
    break;
    
    case 'e' :
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    myservo.write(0);
    
  }
  
// int ir_value = digitalRead(ir);
// if (digitalRead(ir)==HIGH){
////  digitalWrite(led4, HIGH);
////  delay(5000);
////  digitalWrite(led4, LOW); 
//   myservo.write(90);
//    delay(5000);
//      }
//   else{
//
//   myservo.write(0);
//   }

//control door using ir sensor
if (digitalRead(ir) == HIGH) {
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
    myservo.write(90);
    delay(2000);
  
} else {
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
    myservo.write(0);
  }



}
