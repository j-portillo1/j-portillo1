# CS330- C++ 
Repo for learning C++ 

Author: Jessica Portillo 

## C++ History 
C++ is a general purpose, object oriented language. 
### History 
C++ is a general purpose programming lanuage initially known as ‘C with Classes' but later modified in 1983 to C++. It was developed in 1979 by Danish Computer Scientist, Bjarne Stroustrup. In the process of completing his PHD at Bell Telephone Laboratories, now known as Nokia Bell  Labs. He wanted a language similar to C but with an additional implementation of classes, inlining, basic inheritance, default functioning argument etc. C++ is primarily used for the development of applications, games, operating systems and browsers. 


### Resources I will be using to get more info. and guidance on C++: 
-will be updated throughout the semester
  
[1] https://cplusplus.com/doc/tutorial/

[2] https://www.w3schools.com/cpp/


## C++ SetUp
### Windows Installation

I chose VS code as IDE since I am most familiar with it but other IDE's like Eclipse, Atom etc. can be used to run C++ programs.

**Installing IDE**


Install Virtual Studio Code using this [Link ](https://code.visualstudio.com/download
)


**Setting up  C++ in VSCode**

1.Once VS code is installed, on the left side menu click on the extensions tab and search for C++. 
Select the “C/ C++” option and click install. 

2.Install MinGW -w64 toolchain
[Installation Link](https://github.com/msys2/msys2-installer/releases/download/2023-05-26/msys2-x86_64-20230526.exe)

- [ ] Once downloaded, run the installer, and follow the steps given by the installation wizard.
- [ ] Choose the desired installation folder and menu shortcut option.
- [ ] When done, check MSYS2 box and click finish. 
- [ ] A MSYS2 terminal window will appear. When open, run the command: ```pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain```

- [ ] Accept the default packages by clicking **enter key** and type **Y** when asked to proceed with installation. 
- [ ] Once done, add the path to MinGW-w64 bin folder to the windows PATH environment variable. 

3.Final Step: Check MinGW installation 
- [ ] Open a new command prompt and type **g++ --version** and click enter. 
Output should state the version of g++. If that is the case, set up was successful. 

## Creating a Hello World! Program 
Type the code below into your **HelloWorld.cpp** file 

```
#include <iostream>


int main() {
    std::cout << "Hello World!";}

```

The first line of code **#include <iostream>** allows for the use of _cout_ which prints the output to the terminal. 
The **main()** function is necesarry for every C++ program. 
As breifly mentioned, the **std::cout** allows us to print our text inside the quotation marks.


**To write comments in C++:**
Use **//** for one line comments 

Use **_/*_**  to start and **_*/_** to end multiple line comments


**To Run your Code:**
On the top left menu click "Run" and then click "Run Without Debugging" 

# C++ Data Types and Naming Conventions 
C++ contains a total of 95 keywords. These keywords have a unique purpose and meaning to the compiler. This means these reserved words can’t be used to name a variable, function or other identifiers. These keywords are always written in lowercase. 


The table below  is a screenshot taken from [CPPReference](https://en.cppreference.com/w/cpp/keyword) demonstrates the reserved keywords  

<img src="https://github.com/j-portillo1/j-portillo1/assets/144365700/e3fea75a-4ef5-48bd-b87d-bf91af676531" width="280" height="300">


## Naming Conventions 
These naming conventions are standards followed by the C++ Community
- camelCase is most commonly used for variable and function names  
- Constants are named in uppercase letters, words separated by underscores
- Class names first character should be uppercase , no underscores permitted, lowercase letter used as separators

To name variables the following rules must be followed:
1.Variable names cannot start with any number or special characters.
2.A reserved keyword cannot be used as a name
3.Only alphabetic characters, numbers and underscores can be used 
4.Names should be descriptive/ meaningful 

## Variable declaration of common data types 
**int**
```
// Declaring two integer variables 
    int a, b;
    a = 10;
    b = 4;
    cout << a << "\n"; // displays output of variable a 
    cout << b << "\n"; // displays output of variable b 

```
**string**
```
// declaring a string type variable 
    string str1 = "test string";
    std :: cout << str1 << '\n'; //display output of "test string"

```
**floats and doubles**
```
//declaring a float type variable 
    float num1 = 3.78;
    cout << num1 << "\n";

    //declaring a double type variable
    double num2 = 67.9876;
    cout << num2 << "\n";

```
**boolean**
```
//declaring a boolean type variable
    bool thisIsFun = true;
    cout << thisIsFun << "\n";

```

**Array**
```
//declaring an array- can only be values of the same type such as only int, string etc.
    //define variable type, name of array, square brackets specifying the number of elements 
    // Code modifed from https://www.w3schools.com/cpp/cpp_arrays.asp

    int myNumbers [4] = {5,10,15,20}; // declaring an array of integers
    cout << myNumbers[3] << "\n"; // displays the item in index 3 of array 

    string weekendDays [2]= {"Saturday", "Sunday"};  //declaring an array of strings 
    cout << weekendDays[1] << "\n"; // displays item in index 1 of array 

```

**Maps (Called Dictionarys in some other languages)**
```
//declares a map/ dictionary that uses integers as keys and strings as values
    // Code and explanation  from https://www.udacity.com/blog/2020/03/c-maps-explained.html
    map<int, string> sample_map { { 1, "one"}, { 2, "two" } }; 
    cout << sample_map[1] << " " << sample_map[2] << endl;

```

**Pointers**
```
//Pointers - example taken/ modified  from https://cplusplus.com/doc/tutorial/pointers/ and https://www.w3schools.com/cpp/cpp_pointers.asp
    int mynum = 25; // declaring a int type variable 
    int* mypointer = &mynum;  // a pointer variable storing the address of mynum variable 
    cout << mypointer << "\n";

```

### Types and Binding 
C++ is a statically typed language, before a program is run, it checks all types during compilation time. It is strongly typed since data types can be accurately represented.
C++ performs implicit type conversion which is done when a value is being copied to a compatible type such as both being integer or string types. 
In general C++ is mutable. When a string is a character array,  it is  immutable but as an object it is mutable. Additionally, a const object is inmmutable. 

## C++ Operators 
Table Images Taken from [cplusplus](https://cplusplus.com/doc/tutorial/operators/)



<img src="https://github.com/j-portillo1/j-portillo1/assets/144365700/db9e5fe9-ab48-415d-8ce4-3715de239e46" width="400" height="300">


<img src="https://github.com/j-portillo1/j-portillo1/assets/144365700/7c96b743-24ca-4418-b8e8-09dbf3182faa" width="700" height="300">


<img src="https://github.com/j-portillo1/j-portillo1/assets/144365700/93d6e048-577a-4b29-90a6-65ea77e2631f" width="750" height="350">

**Can you add int and float types in C++?**
The answer is yes- you will get a float type variable. 
```
    int a = 10;
    float num1 = 3.78; 
    cout << num1 + a << "\n";
// result will be 13.78 

```
**Can you divide int and float types in C++?**
Yes - result will be float type variable 
```
 int a = 10;
 float num1 = 3.78;
cout << num1 / a << "\n";
// result will be 0.378

```
**Can you add int and string types in C++?** 
No - you will recieve an error 
```
// Example from https://www.educative.io/answers/how-to-add-numbers-and-strings-in-cpp
    string x = "5";
 
    // creating a number variable
    int y = 10;

    //adding the string and number variables
    string z = x + y;

    cout << z; // this will give an error 
    return 0; 

```

## C++ Loops and Functions

**For Loop**
```
//Modified from W3 Schools https://www.w3schools.com/cpp/cpp_for_loop.asp
for (int i = 0; i < 10; i++) {
  cout << i << "\n";
}
```
As stated in W3Schools _int i_ creates the variable _i_ before the loop starts.
The statement _i < 10_ sets the condition- the loop will keep going as long as the number _i_ is less than _10_. This means it will stop when it is greater than 10. The third statement _i++_ increments the value of the variable_i_each time the loop executes. 

**While Loop**

```
//Modified from https://www.w3schools.com/cpp/cpp_while_loop.asp
int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
}

```
This loop initializes the variable _i_. The while loop will execute as long as the variable i is less than 10. It is important to note that after the loop prints out the value of variable _i_, it increments the value of i by one - the line _i ++_shows this. 

**Do/While Loops**
```
//Modified from https://www.w3schools.com/cpp/cpp_do_while_loop.asp
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 10);

```
This loop is similar to the while loop in terms of what is being initialized and done. The difference with this loop is that it will execute the code block (inside the do {}) once, before it will check if the whole condition is true. It will then loop through until the condition is not true. In this case it will print the value of _i_ (which is currently 0) then increment _i_ by one and then it will check the while condition (i<10) and loop through until _i_ is greater than 10. 


**Creating a Function**





A function is created by stating its return value - can either be void, int etc. and its name.




EXAMPLE: 
```
void myFirstFunction() {
  // code
}
```

**Function that Multiplies two Values**


```
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

```



_Functions must be declared before they are called. This means a function must be defined and more preferably placed at the beginning of the file before it is called within other functions._








**Recursive Function Factorials**

```
 Code modified and taken from https://www.tutorialspoint.com/cplusplus-program-to-find-factorial-of-a-number-using-recursion

#include <iostream>
using namespace std;
int factorial(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*factorial(n-1);
}
int main() {
   int result = factorial(5);  // result of function stored in a variable 
   cout<<" The result is: "<< result;
   return 0;
}
```



```
Output: The result is: 120
```
**Split String Function**
```
//Code Taken from : https://iq.opengenus.org/split-string-in-cpp/ 
//This page also shows 2 alternatives to splitting strings in C 
#include <iostream>  
#include <cstring>  
using namespace std;  
  
int main()  
{  
    char str[100]; // declare the size of string      
    cout << " Enter a string: " <<endl;  
    cin.getline(str, 100); // use getline() function to read a string from input stream  
      
    char *ptr; // declare a ptr pointer  
    ptr = strtok(str, " , "); // use strtok() function to separate string using comma (,) delimiter.  
    cout << " Split string using strtok() function: " << endl;   
    while (ptr != NULL)  
    {  
        cout << ptr  << endl; // print the string token  
        ptr = strtok (NULL, " , ");  
    }  
    return 0;
 }
```


```
Output: 

Enter a string: 
Hello Cplusplus World

Split string using strtok() function:
Hello
Cplusplus
World
```
**Pass by Reference Or Pass by Value**





C++ functions can be passed by reference or by value. In my previous examples, the functions are passed by value since a copy of the parameter value is being stored in a variable and returned. 
Here is an example of being passed by reference. The parameters in this swapNums function creates variables referencing other variables using &. The Variable x and y are referring to other existing variables. In this case,  x is equal to the value of y and y is equal to the value of x. 

```
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

```


```
Output:
Before swap: 
First Num: 10 Second Num: 20
After swap: 
First Num: 20 Second Num: 10
```

**Function accepting different Data Types**
```
//This example was taken and slightly modified from https://www.w3schools.com/cpp/cpp_function_multiple.asp


void myFunction(string fname, int age) {
  cout << fname << " Smith. " << age << " years old. \n";
}

int main() {
  myFunction("Jen", 15);
  myFunction("Mark", 20);
  myFunction("Ana", 25);
  return 0;
}

//Output:
//Jen Smith. 15 years old.
//Mark Smith. 20 years old.
//Ana Smith. 25 years old. 

```

_C++ functions can accept multiple parameters with different data types. For example, ints and doubles and in this case ints and strings._

**Function Return Values**
Functions in C++ cannot return multiple values at the same time. However there are ways around this problem with the use of pointers, structures or arrays. Examples of these methods can be found in the link: [Geeks For Geeks](https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/) 

## C++ If/Else, Switch 
**Boolean Values in C++**
A boolean variable is declared with the keyword **bool** and takes the values true or false


```
bool isTypingFun = true;
bool isWritingFun = false;
cout << isTypingFun;  // Outputs 1 (true)
cout << isWritingFun;  // Outputs 0 (false)
```

**Conditional Statements**





_if/ Else_

```
int X = 15 
if (x> 10){
          	Cout << (“Xis greater than 15” );
}else{
         	Cout << (“x is less than 15);
}

```
_if/ else if/ else_

```
SOURCE: https://www.w3schools.com/cpp/cpp_conditions_elseif.asp
int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}


```
_Short Hand Else if_

```
variable = (condition) ? expressionTrue : expressionFalse;
int num = 10;
string result = (num < 20) ? "Less Than" : "Greater than.";
cout << result;

```

_Switch Statement_
```
int month = 5;
switch (month) {
  case 6:
	cout << "The month is June";
    break;
  case 7:
	cout << "The month is July";
    break;
  default:
	cout << "Looking forward to the Summer! ";
}
// Outputs "Looking forward to the Summer! "


```
-The switch expression is evaluated once
-The value of the expression is compared with the values of each case and if it matches the code will be executed
-When the break keyword is reached it will break out of the switch block and stop execution. 
-The default keyword specifies code to run if there is no case match

**NOTE:** C++ delimits code blocks and statements with the use of **curly brackets {}**




**C++ Use of Short Circut Evaluation:** 

**AND**
```
if (0 == 1 && 1 + 1 == 2) {
         cout <<("(0 == 1 && 1 + 1 == 2) is true\n");
      } 
      else {
         cout<<("(0 == 1 && 1 + 1 == 2) is false\n");
      }
      
//Returns (0 == 1 && 1 + 1 == 2) is false

```
**OR**
```
if (1 + 1 == 2 || 0 == 1) {
         cout <<("(1 + 1 == 2 || 0 == 1) is true\n");
         } 
         else {
         cout <<("(1 + 1 == 2 || 0 == 1) is false\n");
      }

//Returns (1 + 1 == 2 || 0 == 1) is true

```
## Objects

## Simple Person Object
```

#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
    int age;
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

```
## Inheritance
```
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
```
The Child class Student inherits from Person. This means that the Student class is able to use the class variables and methods inside Person and inside their own class Student. As can be seen in the main function, the student age, and name are used from the Person class as well as the ageGroup method. Instead of sepreately adding the attributes name and age to the Student class we can inherit from the Person class that way we reduce repetitve code and have a more organized structure. 


### References
[1] https://www.geeksforgeeks.org/history-of-c/

[2] https://unstop.com/blog/history-of-cpp

[3] https://code.visualstudio.com/docs/cpp/config-mingw

[4] https://www.programiz.com/cpp-programming/examples/print-sentence#google_vignette
