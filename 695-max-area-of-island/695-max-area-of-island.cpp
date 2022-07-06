class Solution {
public:
    
    bool isValid(int i, int j, int n , int m, vector<vector<int>>& grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j] == 1)
            return true;
        
        return false;
    }
    
    void numIslandsRec(int i, int j, int n , int m, vector<vector<int>>& grid,int &ans){
        ans++;
        grid[i][j] = '0';
        
        if(isValid(i+1, j, n, m , grid))
            numIslandsRec(i+1, j, n, m, grid,ans);
        
        if(isValid(i-1, j, n, m , grid))
            numIslandsRec(i-1, j, n, m, grid,ans);
        
        if(isValid(i, j+1, n, m , grid))
            numIslandsRec(i, j+1, n, m, grid,ans);
        
        if(isValid(i, j-1, n, m , grid))
            numIslandsRec(i, j-1, n, m, grid,ans);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int n = grid.size();
        int m = grid[0].size();
        int c=0;
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    int ans = 0;
                    numIslandsRec(i, j, n, m, grid,ans);
                    c=max(ans,c);
                }
            }
        }
        return c;
    }
};