#include <Arduino.h>

// put function declarations here:
#include <Servo.h>

Servo myServo;

int buttonPin = 8;
int servoPin = 3;
boolean ButtonToggle = false;
boolean LastButtonState = HIGH;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin, INPUT_PULLUP);
myServo.attach(servoPin);
myServo.write(90);
Serial.println("Starting");
}

void loop() {
  // put your main code here, to run repeatedly:
  int ButtonState = digitalRead(buttonPin);

  if (ButtonState == LOW && LastButtonState == HIGH){
    ButtonToggle = !ButtonToggle;
    Serial.println("Button Pressed");
  }

  if (ButtonToggle == true){
    myServo.write(0);
  Serial.println("Servo to 0"); }

  else if (ButtonToggle == false){
    myServo.write(90);
    Serial.println("Servo to 90");
  }

  delay(50);
  LastButtonState = ButtonState;
  Serial.println(LastButtonState);
  }

// put function definitions here