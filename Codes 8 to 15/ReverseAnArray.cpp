#include<bits/stdc++.h>

using namespace std;

void swapAnArray(int arrs[],int size){
    for(int i=0;i<(size/2);i++){
        // int temp=arrs[i];
        // arrs[i]=arrs[size-1-i];
        // arrs[size-1-i]=temp;
        swap(arrs[i],arrs[size-1-i]);
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}


int main(){
    int n;
    cout<<"Enter number of element"<<" ";
    cin>>n;
    int arr[100];
    //can use int arr[n];
     
    // Fill All Element of an array with same value
    // int arr[10]={[0 ...9]=3}; x not work
    // int arr[10];
    fill(arr,arr+10,42);  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swapAnArray(arr,n);
    printArray(arr,10);
    return 0;
}
