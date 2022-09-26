#include<bits/stdc++.h>
using namespace std;

// Create A Batsman Class

class batsman{
    public:
        
       void msg(){
        cout<<"I Am Good Batsman"<<endl;
       } 
       void strikeRate(){
        cout<<"I Have Strike Rate 50.00 to 184.00"<<endl;
       }
};

// Create TestSpecialist
 
class testBatsMan : public batsman{
    public:
     void strikeRate(){
        cout<<"I Have Strike Rate under 50.00"<<endl;
       }
};

class t20Batsman : public batsman{
    public:
    void strikeRate(){
        cout<<"I Have Strike Rate Above 150.00"<<endl;
       }
    
};


int main(){
    batsman kingKohli;
    t20Batsman Hardik;
    testBatsMan rohit;
    kingKohli.msg();
    kingKohli.strikeRate();

    Hardik.msg();
    Hardik.strikeRate();
    rohit.msg();
    rohit.strikeRate();
    return 0;
}