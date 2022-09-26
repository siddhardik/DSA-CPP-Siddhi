#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int i=9;
    int *r=&i;
    *r=*r+1;
    cout<<i<<endl;    //10
    *r+=1;
    cout<<*r<<endl;   //11
    cout<<r<<endl;
    r+=1;
    cout<<r<<endl;   
    r=r+1;
    cout<<r<<endl;
    */
    //  0x61ff08
    //  0x61ff0c
    //  0x61ff10

    // double *g =&i;     Error "a value of type \"int *\" cannot be used to initialize an entity of type\"double 
    double e=45.836;
    double *v=&e;
    cout<<v<<endl;
    v+=1;
    cout<<v<<endl;
    // 0x61ff00
    // 0x61ff08
    return 0;
}