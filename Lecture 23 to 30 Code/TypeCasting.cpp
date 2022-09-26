// An example of implicit conversion

/*

#include <iostream>
using namespace std;

int main()
{
	int x = 10; // integer x
	char y = 'a'; // character c

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;

	cout << "x = " << x << endl
		<< "y = " << y << endl
		<< "z = " << z << endl;

	return 0;
}

*/

// x = 107
// y = a
// z = 108


// C++ program to demonstrate
// explicit type casting


/* 

#include <iostream>
using namespace std;

int main()
{
	double x = 1.2;

	// Explicit conversion from double to int
	int sum = (int)x + 1;

	cout << "Sum = " << sum;

	return 0;
}
*/

// Sum = 2


// Advantages of Type Conversion:

// This is done to take advantage of certain features of type hierarchies or type representations.
// It helps to compute expressions containing variables of different data types.
