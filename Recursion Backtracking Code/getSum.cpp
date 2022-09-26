#include<iostream>
using namespace std;

int getSum(int arr[],int n){
    if(n<2){
        if(n==0){
            return 0;
        }
        else{
        return arr[n-1];

        }
    }

    return arr[0]+getSum(arr+1,n-1);
}


int main(){
    int arr[]={2,4,6,7,8};
    int arr2[]={2,4,6,8,6};
    cout<<getSum(arr,0);
    return 0;
}