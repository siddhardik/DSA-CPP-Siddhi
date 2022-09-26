#include<iostream>
using namespace std;
#include<vector>

void with_separator(vector<string>& vec,string sep = " ")
{
    // Iterating over all elements of vector
    for (auto elem : vec) {
        cout <<"{"<< elem <<"}"<< sep;
    }
 
    cout << endl;
}

void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        // if(output.length()>0)  

        ans.push_back(output);
        return ;
        }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
	
}




int main(){
    string s="abc";
    vector<string> ans=subsequences(s);
    with_separator(ans," and ");



    return 0;
}   

