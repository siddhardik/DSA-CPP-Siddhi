#include<string>
#include<iostream>
using namespace std;
string replaceSpaces(string &str){
    int len=str.length();
    
    for(int i=0; i<len; i++) {
        char temp=str[0];
        str.erase(str.begin());
        if(temp == ' '){
            str.push_back('@');
            str.push_back('4');
            str.push_back('0');
        }
        else
        {
            str.push_back(temp);
            
        }
    }
    return str;
}

int main(){
    string s;
    getline(cin,s,'\n');
    cout<<replaceSpaces(s);

}

// Time Complexity o(n)  And space Complexity- 0(1)