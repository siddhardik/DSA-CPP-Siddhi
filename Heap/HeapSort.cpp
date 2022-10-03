#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
     }
     cout<<endl;
     }

/*
void heapify(int arr[],int size,int i){

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
*/



void heapify(int arr[], int N, int i)
{

	// Initialize largest as root
	int largest = i;

	// left = 2*i + 1
	int l = 2 * i + 1;

	// right = 2*i + 2
	int r = 2 * i + 2;

	// If left child is larger than root
	if (l < N && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest
	// so far
	if (r < N && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected
		// sub-tree
		heapify(arr, N, largest);
	}
}

 //Build Heap
void buildHeap(int arr[],int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(arr,n,i);    
    }
 }
    

void heapSort(int arr[],int size){
     // One by one extract an element
	// from heap
	for (int i = size- 1; i > 0; i--) {

		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}

int main(){
   
    int n;
    int arr[n];
    cout<<"Enter the number of elements in the Array = ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    buildHeap(arr,n);
    printArray(arr,n);
    heapSort(arr,n);
    printArray(arr,n);
    return 0;
}