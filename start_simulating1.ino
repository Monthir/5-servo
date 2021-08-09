// C++ code
//
#include <Servo.h>

int Position = 0;

int i = 0;

Servo servo_10;

Servo servo_9;

Servo servo_6;

Servo servo_5;

Servo servo_3;

void setup()
{
  servo_10.attach(10, 500, 2500);

  servo_9.attach(9, 500, 2500);

  servo_6.attach(6, 500, 2500);

  servo_5.attach(5, 500, 2500);

  servo_3.attach(3, 500, 2500);

}

void loop()
{
  Position = 0;
  for (Position = 1; Position <= 89; Position += 1) {
    servo_10.write(Position);
  }
  for (Position = 1; Position <= 89; Position += 1) {
    servo_9.write(Position);
  }
  for (Position = 1; Position <= 89; Position += 1) {
    servo_6.write(Position);
  }
  for (Position = 1; Position <= 89; Position += 1) {
    servo_5.write(Position);
  }
  for (Position = 1; Position <= 89; Position += 1) {
    servo_3.write(Position);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (Position = 89; Position >= 0; Position -= 1) {
    servo_10.write(Position);
  }
  for (Position = 89; Position >= 0; Position -= 1) {
    servo_9.write(Position);
  }
  for (Position = 89; Position >= 0; Position -= 1) {
    servo_6.write(Position);
  }
  for (Position = 89; Position >= 0; Position -= 1) {
    servo_5.write(Position);
  }
  for (Position = 89; Position >= 0; Position -= 1) {
    servo_3.write(Position);
    delay(20); // Wait for 20 millisecond(s)
  }
}