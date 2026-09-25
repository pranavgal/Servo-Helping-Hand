#include <Arduino.h>

// put function declarations here:
#include <Servo.h>

Servo myServo;

int buttonPin = 8;
int servoPin = 3;
volatile boolean ButtonToggle = false;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT_PULLUP);
myServo.attach(servoPin);
myServo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ButtonState = digitalRead(buttonPin);

  if (ButtonState == HIGH){
    ButtonToggle != ButtonToggle;
  }

  if (ButtonToggle == true){
    myServo.write(0); }

  else if (ButtonToggle == false){
    myServo.write(90);
  }
  }


// put function definitions here