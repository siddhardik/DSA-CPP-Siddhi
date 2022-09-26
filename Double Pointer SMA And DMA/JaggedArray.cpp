#include <iostream>
using namespace std;
int main()
{
    // dynamic arrays are used to declare an array in heap memory and we can change the size of these arrays at runtime, whereas we cannot change the size of static arrays at runtime
    // 2D Jagged array in C++
    int rows;
    cout << "Enter no of rows of array: ";
    cin >> rows;
    int *numbers = new int[rows]; // array to store no of columns in each row;
    // declaration of array
    int **array = new int *[rows]; // jagged array

    // for (int i = 0; i < rows; i++)
    // {
    //     cout << "Enter no. of cols in row " << i << ": ";
    //     cin >> numbers[i];
    //     array[i] = new int[numbers[i]];
    // }
    // Input values in array
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter no. of cols in row " << i << ": ";
        cin >> numbers[i];
        array[i] = new int[numbers[i]];
        for (int j = 0; j < numbers[i]; j++)
        {
            cout << "Row " << i << ":- Enter value " << i << j << ": ";
            cin >> array[i][j];
        }
        cout << endl;
    }
    // Output values of array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < numbers[i]; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] numbers;
    delete[] array;
    // system("pause");
    return 0;
}


// output
// Enter no of rows of array: 2
// Enter no. of cols in row 0: 6
// Row 0:- Enter value 00: 34
// Row 0:- Enter value 01: 45
// Row 0:- Enter value 02: 6
// Row 0:- Enter value 03: 7 5
// Row 0:- Enter value 04: Row 0:- Enter value 05: 45

// Enter no. of cols in row 1: 3
// Row 1:- Enter value 10: 34
// Row 1:- Enter value 11: 56
// Row 1:- Enter value 12: 7

// 34 45 6 7 5 45
// 34 56 7