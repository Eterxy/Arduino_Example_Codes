int exponent (int x, int y){
    for (int i = 0; i < y; i++){
      x *= x;
    }
    return x;
  }

void setup() {
  // put your setup code here, to run once:

  int x = 3;
  //running a code that finds the power of a number multiple times WITHOUT using a function
  for (int i = 0; i < 4; i++){
    x *= x;
  }
  Serial.println(x);
  delay(5000);
  for (int i = 0; i < 4; i++){
    x *= x;
  }
  Serial.println(x);
  delay(5000);


  //running a code that finds the power of a number multiple times USING a function
  x = 3;
  Serial.println(exponent(x, 4));
  delay(5000);
  Serial.println(exponent(x, 4));

    //Which one do you think is easier to write down especially if you have to run that same code multiple times in your program?
}

void loop() {
  // put your main code here, to run repeatedly:

}
