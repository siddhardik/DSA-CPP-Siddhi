#include<bits/stdc++.h>
using namespace std;

int main(){
   int a=5,b=567;
   int *p;
   cout<<p<<endl;     //Points to Garbage Value(Address) Here ->   0x401a9b
   int *q=0;
   cout<<q<<endl;     // 0
   p=0;      
   cout<<p<<endl;     // 0
   q=&a;
   cout<<q<<" And The Value is "<< *q <<endl;    //0x61ff00 And The Value is 5
   int *w;
   w=&b;
   cout<<w<<" Here Value is *w = "<<*w<<endl;     // 0x61fefc here Value is *w = 567
   cout<<((*w)++)<<endl;                 // 567
   cout<<(++(*w))<<endl;                 //569
   //cout<<(++(*w)++)<<endl;   Compilation Error
   //Copy Pointer To Pointer
   int *t=w;
   cout<<"w= "<<w<<" *w Value = "<<*w<<" And t= "<<t<<" *t Value = "<<*t<<endl;
   //w= 0x61fee8 *w Value = 569 And t= 0x61fee8 *t Value = 569
   return 0;
}