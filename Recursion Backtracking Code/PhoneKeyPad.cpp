
#include <iostream>
using namespace std;
#include <vector>

void Show(vector<string>& vec,string sep = " ")
{
    // Iterating over all elements of vector
    for (auto elem : vec) {
        cout <<"{"<< elem <<"}"<< sep;
    }
 
    cout << endl;
}


void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{

    // base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
        return ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}


int main(){
    string lc="23";
    vector<string> str=letterCombinations(lc);
    Show(str," ");
    // Show(letterCombinations("67")," ");  error

    return 0;
}