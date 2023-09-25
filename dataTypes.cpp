#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
    // Declaring two integer variables 
    int a, b;
    a = 10;
    b = 4;
    cout << a << "\n"; // displays output of variable a 
    cout << b << "\n"; // displays output of variable b 

    // declaring a string type variable 
    string str1 = "test string";
    std :: cout << str1 << '\n'; //display output of "test string"

    //declaring a float type variable 
    float num1 = 3.78;
    cout << num1 << "\n";

    //declaring a double type variable
    double num2 = 67.9876;
    cout << num2 << "\n";

    //declaring a boolean type variable
    bool thisIsFun = true;
    cout << thisIsFun << "\n";

    //declaring an array- can only be values of the same type such as only int, string etc.
    //define variable type, name of array, square brackets specifying the number of elements 
    // Code modifed from https://www.w3schools.com/cpp/cpp_arrays.asp

    int myNumbers [4] = {5,10,15,20}; // declaring an array of integers
    cout << myNumbers[3] << "\n"; // displays the item in index 3 of array 

    string weekendDays [2]= {"Saturday", "Sunday"};  //declaring an array of strings 
    cout << weekendDays[1] << "\n"; // displays item in index 1 of array 


    //declares a map/ dictionary that uses integers as keys and strings as values
    // Code and explanation  from https://www.udacity.com/blog/2020/03/c-maps-explained.html
    map<int, string> sample_map { { 1, "one"}, { 2, "two" } }; 
    cout << sample_map[1] << " " << sample_map[2] << endl;

    //Pointers - example taken/ modified  from https://cplusplus.com/doc/tutorial/pointers/ and https://www.w3schools.com/cpp/cpp_pointers.asp
    int mynum = 25; // declaring a int type variable 
    int* mypointer = &mynum;  // a pointer variable storing the address of mynum variable 
    cout << mypointer << "\n";

    // Can you add ints and floats? 
    cout << num1 + a << "\n"; // ints and floats can be added - resulting variable will be a float (widening conversion)

    // Can you divide ints and floats 
    cout << num1 / a << "\n"; // yes you can divide the - resulting variable will also be a float 

    /*Can you add ints and strings? 
    // Example from https://www.educative.io/answers/how-to-add-numbers-and-strings-in-cpp
    string x = "5";
 
    // creating a number variable
    int y = 10;

    //adding the string and number variables
    string z = x + y;

    cout << z; // this will give an error 
    return 0; */


    
    
    }
