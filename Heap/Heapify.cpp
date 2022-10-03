#include<bits/stdc++.h>
using namespace std;

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

void buildHeap(int arr[],int n){
    for(int i=n/2; i>=0; i--){
        heapify(arr,n,i);    
    }
 }

void printHeap(int arr[],int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
     }
     cout<<endl;
     }

int main(){

    int n;
    int arr[n];
    cout<<"Enter the number of elements in the Heap = ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printHeap(arr,n);

    // All Leaf nodes are by default Heapness
    // For o based index leaf nodes starts from n/2 and ends n-1;
     
    //Build Heaf

    buildHeap(arr,n);
    
    printHeap(arr,n);


    return 0;
}

// Enter the number of elements in the Heap = 9
// 67
// 78
// 34
// 1
// 2
// 3
// 4
// 5678
// 789
// 67

// 78

// 34

// 1

// 2

// 3

// 4

// 5678

// 789
// 67 78 34 1 2 3 4 5678 789 
// 5678 789 34 78 2 3 4 1 67 