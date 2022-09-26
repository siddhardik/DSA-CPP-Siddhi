/*
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
  }
  return 0;
}
 */

// Output-

// Access denied - You must be at least 18 years old.
// Age is: 15

/*



#include <iostream>
using namespace std;
​
int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Error number: " << myNum;
  }
  return 0;
}
​
Access denied - You must be at least 18 years old.
Error number: 505

*/

/*

#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}

OutPut-

Access denied - You must be at least 18 years old.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
        int a;
        cout<< "Enter Your Weight - ";
        cin >> a;
        cout << " " << "You Enter " << a;
        if (a < 60)
        {
            cout << "You Are Ok! ";
        }

        else
        {
            throw a;
        }
    }

    catch (int w)
    {
        cout << " You Are Over weight- "<<w;
    }

    return 0;
}


// You Should Throw something and you Should Catch Something