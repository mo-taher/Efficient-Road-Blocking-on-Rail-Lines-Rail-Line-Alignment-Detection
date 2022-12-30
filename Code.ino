#include <Servo.h>
Servo myservo;
const int trigPin = 10;
const int echoPin = 11;
long tmeduration;
int distance;


// IR with LED part
int IRSensor1 = 2;  // connect ir sensor to arduino pin 5
int IRSensor2 = 4;
int LED = 13;      // conect Led to arduino pin 13
// IR with LED part

// FSR with buzzer part
int buzzer = 6;       //declares buzzer @pin 3
int forceValue = A0;  //declares the FSR @analogpin A0
int FSRvalue = 0;     //saves the analog value as integer
// FSR with buzzer part

void setup() {
  myservo.attach(9);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // IR with LED part
  pinMode(IRSensor1, INPUT);  // IR sensor will take input
  pinMode(IRSensor2, INPUT);
  pinMode(LED, OUTPUT);      // Led will give output
  // IR with LED part

  // FSR with buzzer part
  pinMode(forceValue, INPUT);  //sets the FSR as the input
  pinMode(buzzer, OUTPUT);     //sets the buzzer as the output
  // FSR with buzzer part

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  tmeduration = pulseIn(echoPin, HIGH);
  distance = (0.034 * tmeduration) / 2;

  FSRvalue = analogRead(forceValue);  //reads the FSR and store it in integer
  bool playBuzzer = FSRvalue > 50;

  Serial.println(FSRvalue);
  

 
    if (distance <= 20) {
       if(FSRvalue > 50) {
          analogWrite(buzzer, FSRvalue / 4);
    
        } else {
          analogWrite(buzzer, 0);
          myservo.write(90);
          delay(25000);
        }
  } else {
    
     analogWrite(buzzer, 0);
    myservo.write(0);
    
  }
  

  //Serial.print("distance:");
  //Serial.println(distance);

  // IR with LED part
  int statusSensor1 = digitalRead(IRSensor1);
  int statusSensor2 = digitalRead(IRSensor2);
//  Serial.print("ir sensor 1:");
//  Serial.println(statusSensor1);
//
//  Serial.print("ir sensor 2:");
//  Serial.println(statusSensor2);

  bool redSignal = false;

  
  if (statusSensor1 == 0){
  redSignal = true;
  }
  if (statusSensor2 == 0){
  redSignal = true;
  } else if (statusSensor1 == 1 && statusSensor2 == 1) {
    redSignal = false;
  }
  // IR with LED part

  if(redSignal) {
    digitalWrite(LED, HIGH);
  } else{
    digitalWrite(LED, LOW);
  }

  // FSR with buzzer part
  
  // FSR with buzzer part
}
