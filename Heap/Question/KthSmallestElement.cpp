

#include<iostream>
#include<queue>

using namespace std;

// arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        //Create A Max-Heap to remove max element
        priority_queue<int> mh;
        
        //insert First K element
        for(int i=l;i<k;i++){
            mh.push(arr[i]);
        }
        
        //Remaining Element
        for(int i=k;i<=r;i++){
            //If Small Then push Otherwise nothing
            if(arr[i]<mh.top()){
                mh.pop();
                mh.push(arr[i]);
            }
        }
        
        return mh.top();
    }