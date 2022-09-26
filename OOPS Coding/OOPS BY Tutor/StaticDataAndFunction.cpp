#include <bits/stdc++.h>
using namespace std;

class A{

    public: 
    // const static int age=45;
    static int age;

    static void showAge(){
        cout<<"Your Age is " <<age<<endl;
    }

      
};

int A::age=47;

int main(){
    
    cout<<A::age<<endl;
    A::showAge();
    return 0;
}

// 47
// Your Age is 47