//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    void dfs(vector<vector<int>>&a,vector<bool>&vis,int src){
        vis[src]=true;
        for(auto i:a[src]){
            if(!vis[i])
            dfs(a,vis,i);
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int n=V;
        vector<vector<int>>a(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][j]==1 && i!=j){
                    a[i].push_back(j);
                    a[j].push_back(i);
                }
            }
        }
        vector<bool>vis(n,false);
        int c=0;
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
            dfs(a,vis,i);
            c++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends