//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int r,int c,vector<vector<int>>& grid,vector<vector<bool>>&vis,vector<pair<int,int>>&vec,int ir,int ic){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        vec.push_back({r-ir,c-ic});
        int row[]={-1,0,1,0};
        int col[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int nr=r+row[i];
            int nc=c+col[i];
            if(nr>=0 and nc>=0 and nr<n and nc<m and !vis[nr][nc] and grid[nr][nc]==1){
                dfs(nr,nc,grid,vis,vec,ir,ic);
            }
        }
    }  
  
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        set<vector<pair<int,int>>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and grid[i][j]==1){
                    vector<pair<int,int>>vec;
                    dfs(i,j,grid,vis,vec,i,j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends