class Solution {
public:

    
    void dfs(vector<vector<int>>& isConnected,int i,int n,vector<bool>&visited){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1 and visited[j]==false){
                visited[j]=true;
                dfs(isConnected,j,n,visited);
            }
        }
    }
        
    
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int pro=0;
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                dfs(isConnected,i,n,visited);
                pro++;
            }
        }
        
        return pro;
    }
};