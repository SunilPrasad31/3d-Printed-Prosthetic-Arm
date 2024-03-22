
#include <Servo.h>

// Declare the Servo pins
int servoPin1 = 3;
int servoPin2 = 5;
int servoPin3 = 6;
int servoPin4 = 9;
int servoPin5 = 10;

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  // Attach each servo to its corresponding pin
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
  
}

void loop() {
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  delay(1000);
  servo1.write(130);
  servo2.write(130);
  servo3.write(130);
  servo4.write(130);
  servo5.write(130);
  delay(1000);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  delay(1000);
  
  servo1.write(130);
  delay(1000);
  servo2.write(130);
  delay(1000);
  servo3.write(130);
  delay(1000);
  servo4.write(130);
  delay(1000);
  servo5.write(130);
  delay(1000);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  delay(1000);
  servo1.write(130);
  delay(1000);
  servo5.write(130);
  delay(1000);
  servo2.write(130);
  delay(1000);
  servo4.write(130);
  delay(1000);
  servo2.write(130);
  delay(1000);
  
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  delay(1000);
  servo1.write(130);
  servo2.write(130);
  servo3.write(130);
  servo4.write(130);
  servo5.write(130);
  delay(1000);

  servo1.write(0);
  delay(1000);
  servo5.write(0);
  delay(1000);
  servo3.write(0);
  delay(1000);
  servo2.write(0);
  delay(1000);
  servo4.write(0);
  delay(1000);
  // Make servo 1 go to 0 degrees
  servo1.write(0);
  delay(1000);
  // Make servo 1 go to 130 degrees
  servo1.write(130);
  delay(1000);

  // Make servo 2 go to 0 degrees
  servo2.write(0);
  delay(1000);
  // Make servo 2 go to 130 degrees
  servo2.write(130);
  delay(1000);

  // Make servo 3 go to 0 degrees
  servo3.write(0);
  delay(1000);
  // Make servo 3 go to 130 degrees
  servo3.write(130);
  delay(1000);

  // Make servo 4 go to 0 degrees
  servo4.write(0);
  delay(1000);
  // Make servo 4 go to 130 degrees
  servo4.write(130);
  delay(1000);

  // Make servo 5 go to 0 degrees
  servo5.write(0);
  delay(1000);
  // Make servo 5 go to 130 degrees
  servo5.write(130);
  delay(1000);```
}
