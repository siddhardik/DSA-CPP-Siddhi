#include<bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& arr) {
     string longCommonPrefix="";
     int n=arr.size();
     for(int i=0;i<arr[0].length();i++){
         char temp=arr[0][i];
        //  cout<<temp;
          int j=1;
         for(;j<n;j++){
            if(temp!=arr[j][i]){
                return longCommonPrefix;
                 break;
            }
         }

         if(j==n){
            longCommonPrefix+=temp;
         }
        //  cout<<longCommonPrefix<<endl;
     }
     return longCommonPrefix;
    }