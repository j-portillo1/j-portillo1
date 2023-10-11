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
