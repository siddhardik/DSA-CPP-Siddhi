#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dpCall(int n, vector<int> &dpFib){
        //Check The Function call Result Availabilty
        if(dpFib[n]!=-1){
            return dpFib[n];
        }
        
        //Recursive call And Store the Value
        dpFib[n]=dpCall(n-1, dpFib)+dpCall(n-2,dpFib) ;
        return dpFib[n];
    }
    
    int fib(int n) {
    if(n<2)
           return n; 
    
    //When Call Comes For 2 ,need it 0 1 2 total n+1 size vector needed
    vector<int> dpFib(n+1,-1);
    dpFib[0]=0;
    dpFib[1]=1;
    
    int ans= dpCall(n,dpFib);
        
    return ans;
   }
    
};

int main(){
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   Solution obj;
   cout<<endl<<n<<" th Fibonacci number is :"<<obj.fib(n)<<endl;
   return 0;
}

/*

Enter the number : 12

12 th Fibonacci number is :144
*/