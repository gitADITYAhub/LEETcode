class Solution {
public:
    

    
    bool valid(vector<vector<int>>& grid,int i,int j,int n,int m){
        return (i>=0 and i<n and j>=0 and j<m and grid[i][j]==0);
    }
    
    void dfs(vector<vector<int>>& grid,int i,int j,int n,int m){
        grid[i][j]=1;
        if(valid(grid,i+1,j,n,m))
            dfs(grid,i+1,j,n,m);
        if(valid(grid,i-1,j,n,m))
            dfs(grid,i-1,j,n,m);
        if(valid(grid,i,j+1,n,m))
            dfs(grid,i,j+1,n,m);
        if(valid(grid,i,j-1,n,m))
            dfs(grid,i,j-1,n,m);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++){
            int j=0;
            if(grid[i][j]==0){

                dfs(grid,i,j,n,m);
            }
            j=m-1;
            if(grid[i][j]==0){
                dfs(grid,i,j,n,m);
            }
            
        }
         for(int j=0;j<m;j++){
            int i=0;
            if(grid[i][j]==0){
                dfs(grid,i,j,n,m);
            }
            i=n-1;
            if(grid[i][j]==0){
                dfs(grid,i,j,n,m);
            }
            
        }
        
          int c=0;
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if(grid[i][j]==0){
                    c++;
                     dfs(grid,i,j,n,m);
                 }
                    
             }
         }
       return c;
        
    }
};