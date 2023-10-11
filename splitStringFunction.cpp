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

/*
 Output: 

Enter a string: 
Hello Cplusplus World

Split string using strtok() function:
Hello
Cplusplus
World
*/
 
