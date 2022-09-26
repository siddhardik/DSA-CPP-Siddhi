#include<bits/stdc++.h>
using namespace std;

int main(){  
     int i=4;
     //int& k;   // Error Reference Variable "k" requires an initializer
     int &j=i;

     cout<<i<<" "<<j<<endl;
     i++;
     cout<<i<<" "<<j<<endl;
     j++;
     cout<<i<<" "<<j<<endl;
    //  4 4
    //  5 5
    //  6 6
    return 0;
}