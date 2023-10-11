#include <iostream>
using namespace std; //standard output cout being declared in scope

void myFunction(int one, int two) {
  int output = one * two;
  cout << "result: " << output <<"\n";
}

int main() {
  myFunction(5,7);
  myFunction(3,6);
  myFunction(1,2);
  return 0;
}

//Output:
//result: 35
//result: 18
//result: 2
