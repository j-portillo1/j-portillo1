#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
  int myAge;
  string myName;
} myStructure;

  // Assign values to members of myStructure
  myStructure.myAge = 25;
  myStructure.myName = "Sam";

  // Print members of myStructure
  cout << myStructure.myAge << "\n";
  cout << myStructure.myName << "\n";
}
