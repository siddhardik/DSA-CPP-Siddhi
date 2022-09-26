#include<bits/stdc++.h>
using namespace std;
void inc(int *);
 

int main(){
    int i=8;
    int* y=&i;
    cout<<"The Value Of i ="<<i<<endl;
    inc(&i);
    //inc(y);  // Same as Above line 
    cout<<"The Value Of i ="<<i<<endl;     
    return 0;
}

void inc(int *u){
    cout<<"Pointer Value: "<<u<<endl;
    cout<<*u<<endl;
    *u+=1;
    cout<<"The New Value: "<<*u<<endl;
    u+=1;
    cout<<"The New Pointer VAlue "<<u<<endl;
    cout<<"Should be print A garbage Value "<<*u<<endl;

}
/*
The Value Of i =8
Pointer Value: 0x61ff08
8
The New Value: 9
The New Pointer VAlue 0x61ff0c
Should be print A garbage Value 6422280
The Value Of i =9
*/