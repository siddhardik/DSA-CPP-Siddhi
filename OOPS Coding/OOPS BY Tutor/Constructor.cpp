#include <bits/stdc++.h>
using namespace std;

/*

class A{
    public:
    int a;
    void display(){
        cout<<"Value is"<<a<<endl;
    }

    A(int a){
        cout<<"This Pointer Value - "<<this<<endl;
        this->a=a;
    }
};

int main(){
    A obj(56);
    cout<<"obj Object Address  - "<<&obj;
    return 0;
}

OutPut-

This Pointer Value - 0x61ff0c
obj Object Address  - 0x61ff0c

*/

/*
class A{
    public:
    int a;
    void display(){
        cout<<"Value is"<<a<<endl;
    }

    A(){
        cout<<"I Am default Wala , Created by User!"<<endl;
    }

    A(int a){
        cout<<"This Pointer Value - "<<this<<endl;
        this->a=a;
    }
};

int main(){
    A obj(56);
    A obj2;
    cout<<"obj Object Address  - "<<&obj;
    return 0;
}
Output-

This Pointer Value - 0x61ff0c
I Am default Wala , Created by User!
obj Object Address  - 0x61ff0c

*/

// Learn About Copy Constructor

/*

class A{
    public:
    int a,b;
    void display(){
        cout<<"Value is"<<a<<endl;
    }

    // Copy Constructor Automatically created by Compiler , We can make it also

    A(A& obj){              // Without & It shows error Why ? Answer in Copy
        this->a=obj.a;
    }

    A(){
        cout<<"I Am default Wala , Created by User!"<<endl;
    }


    A(int a,int b){
        this->a=a;
        this->b=b;
    }

    // Abobe Two Parameterized Constructor , Its Copy Constructor will be created by Compile? No because you create one copy constructor!

     A(int a){
        // cout<<"This Pointer Value - "<<this<<endl;
        this->a=a;
    }
};

int main(){
    A obj3(23,45);
    A obj4(obj3);
    cout<<obj3.a<<endl;
    cout<<obj3.b<<endl;
    cout<<obj4.a<<endl;
    cout<<obj4.b<<endl;

    return 0;
}

23
45
23
4201088

*/

// First One Copy For One Paramaterized constructor but second one contain garbage value!


class A
{
public:
    int a, b;
    void display()
    {
        cout << "Value is" << a << endl;
    }

    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    A(int a)
    {

        this->a = a;
    }
};

int main()
{
    A obj(56);
    A obj2(34, 57);
    A objCopy(obj);
    A obj2Copy(obj2);

    cout << obj.a << endl;
    cout << objCopy.a<< endl;
    cout << obj2.a << endl;
    cout << obj2Copy.a << endl;
    cout << obj2.b << endl;
    cout << obj2Copy.b << endl;

    return 0;
}

/*
Output-

56
56
34
34
57
57

*/