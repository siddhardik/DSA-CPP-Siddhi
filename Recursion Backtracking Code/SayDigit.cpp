#include<iostream>
using namespace std;


//Default Argument Practice
void sayDigit(string nam[],int n=234){
    if(n==0){
        cout<<endl;
        return;
    }
    int digit=n%10;
    n=n/10;
    // cout<<nam[digit]<<endl;
    sayDigit(nam,n);
    cout<<nam[digit]<<" ";
}

int main(){
    string nam[]={"zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    sayDigit(nam);
    sayDigit(nam,n);
    return 0;
}