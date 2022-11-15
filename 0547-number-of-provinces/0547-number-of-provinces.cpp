class Solution {
public:

    
    // void dfs(vector<vector<int>>& isConnected,int i,int n,vector<bool>&visited){
    //     for(int j=0;j<n;j++){
    //         if(isConnected[i][j]==1 and visited[j]==false){
    //             visited[j]=true;
    //             dfs(isConnected,j,n,visited);
    //         }
    //     }
    // }
    void dfs(vector<vector<int>>&a,vector<bool>&vis,int src){
        vis[src]=true;
        for(auto i:a[src]){
            if(!vis[i])
            dfs(a,vis,i);
        }
    }
        
    
    
    
    int findCircleNum(vector<vector<int>>&adj) {
        int n=adj.size();
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
//         int pro=0;
//         vector<bool>visited(n,false);
//         for(int i=0;i<n;i++){
//             if(visited[i]==false){
//                 dfs(isConnected,i,n,visited);
//                 pro++;
//             }
//         }
        
//         return pro;
    }
};