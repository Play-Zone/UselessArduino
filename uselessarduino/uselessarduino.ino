/* Copyright (C) 2015 PLAY-ZONE GmbH - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the GNU GENERAL PUBLIC LICENSE
 */

#include <Servo.h>

Servo myservo;

int switchPin = 9;

int servoSwitch = 40;
int servoRest = 168;
int servoPin = A3;

void setup()
{
  myservo.attach(servoPin);
  myservo.write(servoRest);

  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
}

void loop()
{
  if (digitalRead(switchPin) == HIGH)
  {
    delay(150);
    useless();
  }
  delay(100);
}

void useless()
{
  myservo.write(servoSwitch);
  delay(500);
  myservo.write(servoRest);
  delay(500);
}

