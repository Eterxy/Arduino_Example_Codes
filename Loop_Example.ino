void setup() {
  // put your setup code here, to run once:

  int sum, x , y;
  x = 3;
  y = 2;
  sum = x + y;

  //running the same code '3' times without using a loop
  Serial.println(sum += sum);
  Serial.println(sum += sum);
  Serial.println(sum += sum);

  delay(10000);

  //using a loop to run the same code '3' times
  sum = x + y;
  for (int i = 0; i < 3; i++){
    Serial.println(sum += sum);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
