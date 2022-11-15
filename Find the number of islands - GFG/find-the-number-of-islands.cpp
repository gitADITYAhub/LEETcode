//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    void dfs(int r,int c,vector<vector<char>>& grid,vector<vector<bool>>&vis){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        // vec.push_back({r-ir,c-ic});
        // int row[]={-1,0,1,0,1,-1,1,-1};
        // int col[]={0,-1,0,1,-1,1,1,-1};
        for(int delrow = -1; delrow<=1;delrow++) {
         for(int delcol = -1; delcol <= 1; delcol++) {
            int nr=r+delrow;
            int nc=c+delcol;
            if(nr>=0 and nc>=0 and nr<n and nc<m and !vis[nr][nc] and grid[nr][nc]=='1'){
                dfs(nr,nc,grid,vis);
            }
        }
    }
    }

    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        // set<vector<pair<int,int>>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and grid[i][j]=='1'){
                    c++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends