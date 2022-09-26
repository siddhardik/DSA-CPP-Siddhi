#include<bits/stdc++.h>
using namespace std;

int main(){
    // For Arrays
    // int arr[4]={1,2,3,4};
    // int arr2[5];
    // //arr2={2,4,5,6,7};  // Errror
    // //arr2[5]={5,6,4,4,4};  //error
    // cout<<r<<endl;  //0x61fef4
    // char cha[7]="siddhi";
    // cout<<cha[4]<<endl;
    //  cha="siddhi";   // Error
    //  char cha3[7];
     // Not Initialize Produce GARBAGE Value
    //  cha3[7]="siddhi";  Error //ok
    //  char cha3[17]="siddhi";
    //  char *k=&cha3[0];
    //  char *h=&cha3[4];
    //  cout<<h<<endl;   //hi
    //  cout<<k<<endl;    //siddhi 
    // char t[5]="weret";
    // "message": "a value of type \"const char [6]\" cannot be used to initialize an entity of type \"char [5]\"",
    // char u[5]="sid";
    // cout<<u<<endl;     // sid

    char *ty="rty ";
    char *i="What A beauty ";
    cout<<ty;
    cout<<"See What Happen ";
    cout<<i<<endl;
    // rty See What Happen What A beauty 

    /* 
    warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
     char *ty="rty ";
    But Warning:  forbids converting a string constant to 'char*' [-Wwrite-strings]
     char *i="What A beauty "; */



    return 0;
}