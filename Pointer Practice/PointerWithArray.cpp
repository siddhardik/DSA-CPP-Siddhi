#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={11,22,33,44,55,66,77,88,99,1010};
    cout<<"Size Of arr = "<<sizeof(arr)<<endl;
    //    Size Of arr = 40
    cout<<"First Block Address "<<arr<<" And Value is "<<*arr<<endl;
    cout<<"Fourth Block Address "<<(arr+3)<<" And Value is "<<*(arr+3)<<endl;
    // First Block Address 0x61fed8 And Value is 11
    // Fourth Block Address 0x61fee4 And Value is 44
    *arr-=10;
    cout<<"First Block Address "<<arr<<" And Value is "<<*arr<<endl;
    // First Block Address 0x61fed8 And Value is 1

    cout<<" The Value of arr[5] ="<<arr[5]<<" Same as The Value of *(arr+5)= "<< *(arr+5)<<endl;
    cout<<" The Value of 5[arr] ="<<5[arr]<<" Same as The Value of *(5+arr)= "<< *(5+arr)<<endl;
    cout<<"The Value Of 9th Block (9-1)[arr] ="<<(9-1)[arr]<<endl;
    //  The Value of arr[5] =66 Same as The Value of *(arr+5)= 66
    //  The Value of 5[arr] =66 Same as The Value of *(5+arr)= 66
    //  The Value Of 9th Block (9-1)[arr] =99

    int *u=arr;
    //  int *t=arr[0];// Error
    int *y=&arr[0];
    cout<<"Size of y = "<<sizeof(y)<<endl;
    cout<<"The Value of u= "<<u<<" The Value of y = "<<y<<endl;
        //    Size of y = 4
        //    The Value of u= 0x61fed0 The Value of y = 0x61fed0


    return 0;
}