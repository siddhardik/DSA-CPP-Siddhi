#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    
    void operator + (A& obj){
        int value1=this->a;
        int value2=obj.a;

        cout<<"+ Operator does now Substraction: "<< value1<<"-" <<value2<< "=" <<value1-value2<<endl;

    }

    void operator() (){

        cout<<"() operator has been called !"<< this->a<<endl;
    }

};

int main(){
    A obj1;
    A obj2;

    obj1.a=70;
    obj2.a=10;

    obj1+obj2;

    obj1();

    return 0;
}