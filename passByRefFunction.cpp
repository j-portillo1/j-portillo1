//Code Taken and slightly modified from https://www.w3schools.com/cpp/cpp_function_reference.asp
#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << "First Num: " <<firstNum << " Second Num: " << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << "First Num: " <<firstNum << " Second Num: " << secondNum << "\n";

  return 0;
}

//Output: 
//Before swap: 
//First Num: 10 Second Num: 20
//After swap: 
//First Num: 20 Second Num: 10
