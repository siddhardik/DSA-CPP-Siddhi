// A simple C++ program to generate all rotations
// of a given string
#include<bits/stdc++.h>
using namespace std;

// Print all the rotated string.
void printRotatedString(char str[])
{
	int len = strlen(str);

	// Generate all rotations one by one and print
	char temp[len];
	for (int i = 0; i < len; i++)
	{
		int j = i; // Current index in str
		int k = 0; // Current index in temp

		// Copying the second part from the point
		// of rotation.
		while (str[j] != '\0')
		{
			temp[k] = str[j];
			k++;
			j++;
		}

		// Copying the first part from the point
		// of rotation.
		j = 0;
		while (j < i)
		{
			temp[k] = str[j];
			j++;
			k++;
		}
    

		printf("%s\n", temp);
	}
}

// Driven Program
int main()
{
    int n;
    cin>>n;
	char str[n];
    cin.ignore(n+1,'\n');
    cin.getline(str,n);
	printRotatedString(str);
	return 0;
}

// _OutPut-
// 6
// siddhi
// siddh
// iddhs
// ddhsi
// dhsid
// hsidd
