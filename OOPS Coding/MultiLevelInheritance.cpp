#include <iostream>
using namespace std;

// Parent class
class MyClass {
 // protected:   //Works Fine
 private:          // Works FIne
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Child class
class MyChild: public MyClass {

public:
 void myFunction() {
      cout << "Already Write in Parent Then Again Write" ;
    }
};

// Grandchild class 
class MyGrandChild: public MyChild {

};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}

// Output -  Already Write in Parent Then Again Write