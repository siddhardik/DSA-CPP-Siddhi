#include<bits/stdc++.h>
using namespace std;

void showParts(string s){
    if(s.length()==0){
        cout<<"Reached In Base Case"<<endl;
        return;
    }
    cout<<s<<endl;
    
    showParts(s.substr(1));
    
    
}

int main(){
    string s="Siddhartha";
    showParts(s);
    
    return 0;
}