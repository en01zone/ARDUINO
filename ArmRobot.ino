/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;  // create servo object to control a servo
Servo myservo4;


int potpin1 = A0; //potensio control servo bawah
int potpin2 = A1; //potensio control servo kiri
int potpin3 = A2; //potensio control servo kanan
int potpin4 = A3; //potensio control servo capit
int val1;
int val2;
int val3;
int val4;

void setup() {
  Serial.begin(9600);
  myservo1.attach(9);  //Bawah
  myservo2.attach(10); //Kiri
  myservo3.attach(11); //Kanan
  myservo4.attach(12); //Capit
}

void loop() {
  //servo bawah
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo1.write(val1);                  // sets the servo position according to the scaled value
  Serial.print("val 1 = ");
  Serial.println(val1);

  //servo kiri
  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  val2 = map(val2, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo2.write(val2);
  Serial.print("val 2 = ");
  Serial.println(val2);
                             // waits for the servo to get there

  //servo kanan
  val3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023)
  val3 = map(val3, 0, 1023, 40, 100);     // scale it to use it with the servo (value between 0 and 180)
  myservo3.write(val3);                  // sets the servo position according to the scaled value
  Serial.print("val 3 = ");
  Serial.println(val3);

  //servo capit
  val4 = analogRead(potpin4);            // reads the value of the potentiometer (value between 0 and 1023)
  val4 = map(val4, 0, 1023, 30, 120);     // scale it to use it with the servo (value between 0 and 180)
  myservo4.write(val4);
  Serial.print("val 4 = ");
  Serial.println(val4);
  delay(15);
}
