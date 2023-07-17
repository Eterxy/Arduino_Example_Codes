#include <iostream>

void setup() {
  // put your setup code here, to run once:
  int sum, x, y;
  x = 3;
  y = 2;
  sum = x + y;

  //try verifying the program with the code below
  Serial.println(3 + 2 = 5);


  //printing using the values itself
  Serial.println("3 + 2 = 5");
  Serial.println("5 + 5 = 10");
  delay(5000);

  //printing using variables
  Serial.println(sum);
  Serial.println(sum += sum);
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
