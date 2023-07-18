#include <iostream>
using namespace as std;

int main(){
  int sum, x , y;
  x = 3;
  y = 2;
  sum = x + y;

  //running the same code '3' times without using a loop
  cout << sum += sum <<endl;
  cout << sum += sum <<endl;
  cout << sum += sum <<endl;

  delay(10000);

  //using a loop to run the same code '3' times
  sum = x + y;
  for (int i = 0; i < 3; i++){
    cout << sum += sum <<endl;
  }
}