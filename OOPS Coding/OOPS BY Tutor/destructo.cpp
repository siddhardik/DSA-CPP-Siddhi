#include <bits/stdc++.h>
using namespace std;

class A{

    public: 

    A(){
        cout<<"Constructor Called"<<endl;
    }

    ~A(){
        cout<<"I Am Destructor"<<endl;
    }   
};

int main(){
    A obj;
    A *obj2=new A();
    // Dynamically create Object's Destructor Called Manually
    delete obj2;
    return 0;
}

// Constructor Called
// Constructor Called
// I Am Destructor
// I Am Destructor
// If user create Destructor Then Compiler will not create destructor