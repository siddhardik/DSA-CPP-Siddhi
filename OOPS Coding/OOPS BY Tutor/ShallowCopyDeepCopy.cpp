

/*
class A
{
    public:
     char *name;

     A(){
        name=new char[100];
        cout<<"Constructor Called!"<<endl;
     }

     void setName(char name[]){
        strcpy(this->name,name);
     }

     void getName(){
        cout<<name<<endl;
     }

};

int main()
{ 
    char naam[11]="siddhartha";
    A obj;
    obj.setName(naam);
    A obj2=obj;
    obj.getName();
    obj2.getName();
    obj.name[9]='i';
    obj.getName();
    obj2.getName();
     return 0;
}
*/



// Happend Because Compiler;s Copy Constructor does shallow copy
// Constructor Called!
// siddhartha
// siddhartha
// siddharthi
// siddharthi

/*

class A
{
    public:
     char *name;

     A(){
        name=new char[100];
        cout<<"Constructor Called!"<<endl;
     }

     A(A& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
     }

     void setName(char name[]){
        strcpy(this->name,name);
     }

     void getName(){
        cout<<name<<endl;
     }

};

int main()
{ 
    char naam[11]="siddhartha";
    A obj;
    obj.setName(naam);
    A obj2=obj;
    obj.getName();
    obj2.getName();
    obj.name[9]='i';
    obj.getName();
    obj2.getName();
     return 0;
}

Constructor Called!
siddhartha
siddhartha
siddharthi
siddhartha

*/