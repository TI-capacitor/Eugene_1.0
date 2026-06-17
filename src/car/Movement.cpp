#include "Movement.h"

//movement class constructor
Movement::Movement(int In1,int In2,int In3,int In4,int EnA,int EnB) {}

//method to initialize pins in one instance
void Movement::begin(){
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);
  pinMode(EnA,OUTPUT);
  pinMode(EnB,OUTPUT);

}

//stops all motor movement
void Movement::stopMotors() {
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
  analogWrite(EnA,0);
  analogWrite(EnB,0);
}

//Moves forward
void Movement::forward() {
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  analogWrite(EnA,255);
  analogWrite(EnB,255);
}

//moves in reverse
void Movement::backward() {
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  analogWrite(EnA,255);
  analogWrite(EnB,255);
}

//pivots to the right
void Movement::pivotRight() {
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  analogWrite(EnA,255);
  analogWrite(EnB,255);
}

//pivots left
void Movement::pivotLeft() {
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  analogWrite(EnA,255);
  analogWrite(EnB,255);
}
  



