# CS330- C++ 
Repo for learning C++ 

Author: Jessica Portillo 

## C++ History 
C++ is a general purpose, object oriented language. 
### History 
C++ is a general purpose programming lanuage initially known as ‘C with Classes' but later modified in 1983 to C++. It was developed in 1979 by Danish Computer Scientist, Bjarne Stroustrup. In the process of completing his PHD at Bell Telephone Laboratories, now known as Nokia Bell  Labs. He wanted a language similar to C but with an additional implementation of classes, inlining, basic inheritance, default functioning argument etc. C++ is primarily used for the development of applications, games, operating systems and browsers. 


## Resources I will be using to get more info. and guidance on C++: 
* will be updated throughout the semester
  
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

### References
[1] https://www.geeksforgeeks.org/history-of-c/

[2] https://unstop.com/blog/history-of-cpp

[3] https://code.visualstudio.com/docs/cpp/config-mingw

[4] https://www.programiz.com/cpp-programming/examples/print-sentence#google_vignette
