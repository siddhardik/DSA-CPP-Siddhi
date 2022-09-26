#include <iostream>
using namespace std;

int binarySerach(int arr[], int key, int start, int end)
{

    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]<key){
        return binarySerach(arr,key,mid+1,end);
    }
    else{
        return binarySerach(arr,key,start,mid-1);
    }

}

int main()  
{
    int arr[8] = {2, 4, 6, 7, 7,8,8, 67};
    // int arr2[]={2,4,6,8,6};
    cout << "THE INDEX OF THE ELEMENT IS " << binarySerach(arr, 8, 0, 8) << endl;
    return 0;
}