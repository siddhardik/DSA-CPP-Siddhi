#include <iostream>
using namespace std;

// Base class
class Employee  {
// private:   // error for Access in Child CLass
 protected:  // Protected access specifier
    int salary;
    int age;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
//   myObj.age=25; //Error
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}

/* Output
Salary: 50000
Bonus: 15000

*/


