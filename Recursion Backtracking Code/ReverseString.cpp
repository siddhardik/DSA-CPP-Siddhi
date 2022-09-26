#include<iostream>
using namespace std;

void reverse(string& str, int i,int j) {

    cout << "call recieved for " << str << endl;


    //base case
    if(i>j)
        return ;


    // Solve via one pointing METHOD__
    swap(str[i], str[str.length()-i-1]);
    i++;

    //Recursive call
    reverse(str,i,str.length()-1-i);

}

int main() {

    string name = "abcdtyue";
    cout << endl;
    reverse(name, 0 , name.length()-1 );
    cout << endl;
    cout << name << endl;

    return 0;
}