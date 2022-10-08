//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans,
    string path, vector<vector<int>> &visited){
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        // down
        if(i+1<n && !visited[i+1][j] && a[i+1][j]==1){
            visited[i][j]=1;
            solve(i+1, j, a, n, ans, path+'D', visited);
        }
        // left
        if(j-1>=0 && visited[i][j-1]!=1 && a[i][j-1]==1){
            visited[i][j]=1;
            solve(i, j-1, a, n, ans, path+'L', visited);
        
        }
        
        // right
        if(j+1<n && !visited[i][j+1] && a[i][j+1]==1){
            visited[i][j]=1;
            solve(i, j+1, a, n, ans, path+'R', visited);
            
        }
        
        // up
        if(i-1>=0 && !visited[i-1][j] && a[i-1][j]==1){
            visited[i][j]=1;
            solve(i-1, j, a, n, ans, path+'U', visited);
        }
         visited[i][j]=0;
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        // Recursion
        vector<string> ans;
        vector<vector<int>> visited(n, vector<int> (n,0));
        if(m[0][0]==1) 
        {
            solve(0, 0, m, n, ans, "", visited);
        }
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends