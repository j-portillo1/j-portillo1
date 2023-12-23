#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
    int age;

void ageGroup(){
    if (age> 17) {
    cout<<"You are an adult"<<"\n";
    }
    else {
    cout << "You are a child"<<"\n";
    } 
    
}};
};

int main() {
  Person perObj1;
  perObj1.name = "Sam";
  perObj1.age = 19;

  Person perObj2;
  perObj2.name = "Frank";
  perObj2.age = 27;
 

  cout << perObj1.name << " " << perObj1.age << "\n";
  cout << perObj2.name << " " << perObj2.age << "\n";
 
  return 0;
}
//Prints out
//Sam 19
//Frank 27
