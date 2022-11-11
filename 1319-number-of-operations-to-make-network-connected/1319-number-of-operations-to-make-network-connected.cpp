class Solution {
public:
    
    void dfs(vector<vector<int>>&adj,vector<bool>&vis,int src){
        vis[src]=true;
        for(auto v:adj[src]){
            if(!vis[v])
                dfs(adj,vis,v);
        }
    }
        
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
        
        vector<vector<int>>adj(n);
        for(auto x:connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<bool>vis(n,false);
        int comp=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj,vis,i);
                comp++;
            }
        }
        return comp-1;
    }
};