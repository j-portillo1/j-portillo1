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

### C++ Data Types and Naming Conventions 
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








### References
[1] https://www.geeksforgeeks.org/history-of-c/

[2] https://unstop.com/blog/history-of-cpp

[3] https://code.visualstudio.com/docs/cpp/config-mingw

[4] https://www.programiz.com/cpp-programming/examples/print-sentence#google_vignette
