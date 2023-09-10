# CS330- C++ 
Repo for learning C++ 
Author: Jessica Portillo 

## C++ History 
C++ is a general purpose, object oriented language. 
### History 
C++ was developed in 1979 by Danish Computer Scientist, Bjarne Stroustrup. In the process of completing his PHD at Bell Telephone Laboratories, now known as Nokia Bell  Labs, he wanted a language similar to C but with an additional implementation of classes, inlining, basic inheritance, default functioning argument etc. The language was initially known as ‘C with Classes' but was modified in 1983 to C++. 

## C++ SetUp
### Windows Installation 
**Installing IDE**


Install Virtual Studio Code using this [Link ](https://code.visualstudio.com/download
)

**Setting up  C++ in VSCode**

Once VS code is installed, on the left side menu click on the extensions tab and search for C++. Select the “C/ C++” option and click install. 

Install MinGW -w64 toolchain
[Installation Link](https://github.com/msys2/msys2-installer/releases/download/2023-05-26/msys2-x86_64-20230526.exe)

- []Once downloaded, run the installer, and follow the steps given by the installation wizard.
- []Choose the desired installation folder and menu shortcut option.
- []When done, check MSYS2 box and click finish. 
- []A MSYS2 terminal window will appear when open, run the command 
_**pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain**_
- []Accept the default packages by clicking enter key and enter Y when asked to proceed with installation. 

- []Once done, add the path to MinGW-w64 bin folder to the windows PATH environment variable. 

Final Step: Check MinGW installation 
- []Open a new cmd prompt and type g++ – version and click enter. 
Output should state the version of g++ if that is the case, set up was successful. 

- [x] #739
- [ ] https://github.com/octo-org/octo-repo/issues/740
- [ ] Add delight to the experience when all tasks are complete :tada:


### References
[1] https://www.geeksforgeeks.org/history-of-c/


[2]https://unstop.com/blog/history-of-cpp
