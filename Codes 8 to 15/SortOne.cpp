#include <bits/stdc++.h>

using namespace std;



void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<endl;
}

void sortOne(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        while(arr[left] == 0 && left<right)
        {
            left++;
        }
        while(arr[right] == 1 && left<right)
        {
            right--;
        }
        if(arr[left]>arr[right]){
            swap(arr[left], arr[right]);
            right--;
            left++;
        }
    }
}

int main()
{
    int arr[10] = {0, 1, 0, 0, 0, 1, 0, 0, 1, 1};
    printArray(arr, 10);
    cout<<endl<<"I AM going to sort"<<endl;
    sortOne(arr,10);
    printArray(arr, 10);
    return 0;
}


