#include <iostream>
#include <string>
using namespace std;

// Parent class
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

// Child class
class Student: public Person {
  public:
    int stuID;
    double gpa;
    
void gpaCheck(){
    if (gpa > 2);
    cout<<"GPA is high"<<"\n";
    }
};

int main() {

  Student stu1;

  stu1.name = "Sam";
  stu1.age = 19;
  stu1.stuID = 123;
  stu1.gpa = 4.0;
 

  cout <<"Name: " <<stu1.name << " Age:" << stu1.age << " ID:" << stu1.stuID << " GPA:" << stu1.gpa<<"\n";
  stu1.ageGroup();
  stu1.gpaCheck();

 
  return 0;
}
//Prints out
//Name: Sam Age:19 ID:123 GPA:4
//You are an adult
//GPA is high
