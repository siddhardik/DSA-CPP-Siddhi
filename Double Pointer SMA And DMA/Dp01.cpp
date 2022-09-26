#include<bits/stdc++.h>
using namespace std;

void update(int **p){
   
    **p=**p+1;
}

int main(){
    int i=8;
    int *p1=&i;
    int **p2=&p1;
      // cout<<**p2<<" "<<*p1<<" "<<i<<endl;       // 8   8   8
      // cout<<&i<<" "<<p1<<" "<<*p2;    // 0x61fef8 0x61fef8 0x61fef8

      update(p2);
   
    cout<<i<<endl;


    return 0;
}