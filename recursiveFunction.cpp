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

//Output: The result is: 120
