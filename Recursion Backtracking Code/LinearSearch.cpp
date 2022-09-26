#include<iostream>
using namespace std;

bool linearSerach(int arr[],int key,int size){
    if(size==0){
        cout<<arr<<endl;
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        cout<<arr<<endl;
        return linearSerach(arr+1,key,size-1);
    }
}
    

int main(){
    int arr[]={2,4,6,7,8,6,8,9,34};
    int arr2[]={2,4,6,8,6};
    cout<<linearSerach(arr,36,9)<<endl;
    return 0;
}