#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n<2){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;

    }

    else{
        return isSorted(arr+1,n-1);
    }


}

int main(){
    int arr[]={2,4,6,7,8};
    int arr2[]={2,4,6,8,6};
    cout<<isSorted(arr,5)<<endl;
    cout<<isSorted(arr2,5);
    return 0;
}