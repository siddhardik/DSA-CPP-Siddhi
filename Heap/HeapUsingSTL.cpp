#include<iostream>
#include<queue>

using namespace std;

int main(){

    //Max Heap By default
    priority_queue<int> maxheap;
    maxheap.push(162);
    maxheap.push(182);
    maxheap.push(127);
    cout<<"Top Element of heap is "<<maxheap.top()<<endl;
    maxheap.pop();
    maxheap.pop();
    maxheap.pop();
    cout<<"Heap is Empty "<<maxheap.empty()<<endl;
    maxheap.push(102);
    maxheap.push(127);
    maxheap.push(12);  
    maxheap.push(152);
    maxheap.push(1552);
    maxheap.push(142);
    maxheap.push(1662); 
    cout<<"Top Element of heap is "<<maxheap.top()<<endl;

    //Min heap 
    priority_queue<int,vector<int>,greater<int> > minheap;
    cout<<"Heap is Empty"<<minheap.empty()<<endl;
    minheap.push(162);
    minheap.push(182);
    minheap.push(127);
    cout<<"Top Element of heap is "<<minheap.top()<<endl;
    return 0;
}


/*
Top Element of heap is 182
Heap is Empty 1
Top Element of heap is 1662
Heap is Empty1
Top Element of heap is 127

*/