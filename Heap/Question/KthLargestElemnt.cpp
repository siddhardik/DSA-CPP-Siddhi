#include<bits/stdc++.h>
using namespace std;

/*
Example 1:

Input:
N = 5, k = 2
arr[] = {12,5,787,1,23}
Output: 787 23
Explanation: First largest element in
the array is 787 and the second largest
is 23.
Example 2:

Input:
N = 7, k = 3
arr[] = {1,23,12,9,30,2,50}
Output: 50 30 23
Explanation: Three Largest element in
the array are 50, 30 and 23.
*/

 //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // Use Min Heap For Largest
         priority_queue<int,vector<int>,greater<int> > minheap;
         
         //Create A ans vector
         
         vector<int> ans;
         
         if(k>n){
             return ans;
         }
         
         // Process First K element
         for(int i=0;i<k;i++){
             minheap.push(arr[i]);
         }
        
        //For Remaining Element
        for(int i=k;i<n;i++){
            if(arr[i]>minheap.top()){
                minheap.pop();
                minheap.push(arr[i]);
            }
        }
        
        //Copy Element from heap to ans
        
        stack<int> st;
        for(int i=0;i<k;i++){
            st.push(minheap.top());
            minheap.pop();
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
        
        }

