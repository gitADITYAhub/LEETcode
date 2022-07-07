class Solution {
public:
    
    bool valid(int i, int j, int n, int m, vector<vector<int>>& grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j] ==1 ){
            return true;
        }
    return false;
   }
        
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        int t=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        if(fresh==0)
            return 0;
        while(!q.empty()){
            int temp=0;
            int size=q.size();
            while(size!=0){
                pair<int,int>p=q.front();
                q.pop();
                int x1=p.first;
                int y1=p.second;
                int ax[4]={1,-1,0,0};
                int ay[4]={0,0,1,-1};
                for(int i=0;i<4;i++){
                    int x=ax[i]+x1;
                    int y=ay[i]+y1;
                    if(valid(x,y,n,m,grid)){
                        temp++;
                        grid[x][y]=2;
                        q.push({x,y});
                    }
                }
                size--;
            }
            if(temp!=0)
                t++;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    t=0;
                    break;
            }
            }
        }
        if(t==0)
            return -1;
        else
            return t;
        
    }
};


