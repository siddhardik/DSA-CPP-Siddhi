#include<bits/stdc++.h>
using namespace std;
/*
class A{
    public:
    int a;
    void display(){
        cout<<"Value is"<<a<<endl;
    }
};

int main(){
    A obj;
    cout<<sizeof(obj)<<endl;
    cout<<obj.a<<endl;
    return 0;
}
*/
// 4
// 4201067


/*
class A{
};

int main(){
    A obj;
    cout<<sizeof(obj)<<endl;
    return 0;
}
*/

// 1  keep the track of the class A

class A{
    public:
    int a=5;
    void display(){
        cout<<"Value is"<<a<<endl;
    }
};

int main(){
    A obj;
    // A obj2();  //Error
    A *obj2=new A();
    A *obj3 =new A;
    cout<<"New Two";
    cout<<obj3->a<<endl;
    cout<<obj.a<<endl;
    cout<<sizeof(obj)<<endl;
    cout<<obj2->a<<endl;
    return 0;
}