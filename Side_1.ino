// C++ code
//
#include <Servo.h>

int Position = 0;

int Sensor = 0;

Servo servo_3;

void setup()
{
  pinMode(A0, INPUT);
  servo_3.attach(3, 500, 2500);
}

void loop()
{
  Sensor = analogRead(A0);
  Position = map(Sensor, 0, 1023, 0, 180);
  servo_3.write(Position);
  delay(10); // Delay a little bit to improve simulation performance
}