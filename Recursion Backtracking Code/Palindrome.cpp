#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;
    // Not using tolower ,  it process A And a are different!
    if(tolower(str[i]) != tolower(str[j]))
        return false;
    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}

int main() {

    string name = "BookkOoB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }


    return 0;
}