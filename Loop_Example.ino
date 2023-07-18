#include <Adafruit_SSD1306>

void setup() {
  // put your setup code here, to run once:

  int sum, x , y;
  x = 3;
  y = 2;
  sum = x + y;

  //running the same code '3' times without using a loop
  display.println(sum += sum);
  display.println(sum += sum);
  display.println(sum += sum);

  delay(10000);

  //using a loop to run the same code '3' times
  sum = x + y;
  for (int i = 0; i < 3; i++){
    display.println(sum += sum);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int sum, x , y;
  x = 3;
  y = 2;
  sum = x + y;
  display.println(sum += sum);
}
