#include<bits/stdc++.h>

using namespace std;

void swapALternate(int arrs[],int size){
    for(int i=0;i<(size-1);i+=2){
        // i+1<size
        swap(arrs[i],arrs[i+1]);
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}


int main(){
    int arreven[]={1,2,3,4,5,6};
    int arrOdd[]={1,2,3,4,5};

    swapALternate(arreven,6);
    printArray(arreven,6);

    cout<<endl;

    swapALternate(arrOdd,5);
    printArray(arrOdd,5);
    return 0;
}
