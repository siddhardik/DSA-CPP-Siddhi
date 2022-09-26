#include<bits/stdc++.h>
using namespace std;


class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration

    void myMethodIn(){
        cout<<"I am From in"<<endl;
    }
};

// Method/function definition outside the class
void MyClass::myMethod() {  //:: scope resolution Operator
  cout << "Hello World!"<<endl;
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  myObj.myMethodIn(); 
  return 0;
}
