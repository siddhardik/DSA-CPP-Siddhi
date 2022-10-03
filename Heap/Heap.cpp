#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    

    //Heap constructor
    heap(){
       size=0;
    }

    //Insertion
    void insert(int val){
           int index=size;
           //Insert Element at the end of the heap
           arr[index]=val;
           size++;  //Increment size

           //2. Placed it into its right Position Consider Max Heap And 0 based indexing
           while(index>0){
            int parent=(index-1)/2; 
            if(arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else{
                return;
            }

           }
    }    
     
     void deleteFromHeap(){
        if(size<1){
            cout<<"Nothing to delete!"<<endl;
            return;
        }

        //First Swap First Element with last element , Beacuse delete from first
        swap(arr[size-1], arr[0]);

        //delete last node
        size--;

        // placed recent newcomer First Element to its Correct position 
        int i=0;

        while(i<size){
        int leftIndex=2*i+1;
        int rightIndex=2*i+2;
            if(leftIndex<size && arr[leftIndex]>arr[i]){
                swap(arr[leftIndex], arr[i]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[rightIndex]>arr[i]){
                swap(arr[rightIndex], arr[i]);
                i=rightIndex;
            }
            else return;

        }


     }




    //Print the Heap Element
     void printHeap(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
     }
     cout<<endl;
     }
     
};



int main(){
    heap mh;
    mh.deleteFromHeap();
    mh.insert(12);
    mh.insert(34);
    cout<<"Size of the heap "<<mh.size<<endl;
    mh.insert(45);
    mh.insert(35);
    cout<<"Size of the heap "<<mh.size<<endl;
    mh.printHeap();
    // mh.arr;
    mh.insert(1452);
    mh.insert(384);
    cout<<"Size of the heap "<<mh.size<<endl;
    mh.insert(445);
    mh.insert(140);
    cout<<"Size of the heap "<<mh.size<<endl;
    mh.printHeap();
    mh.deleteFromHeap();
    mh.printHeap();
    mh.deleteFromHeap();
    mh.printHeap();

    


    return 0;
}