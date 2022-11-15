class Solution {
public:
    void convert(vector<vector<char>>& board,int n,int m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='Q')
                    board[i][j]='O';
                else if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
    }
    
    bool valid(vector<vector<char>>& board,int x,int y,int n,int m){
        if(x>=0 and x<n and y>=0 and y<m and board[x][y]=='O')
            return true;
        else
            return false;
    }
    
    void helper(vector<vector<char>>& board,int x,int y,int n,int m){
        board[x][y]='Q';

        if(valid(board,x+1,y,n,m)){
            helper(board,x+1,y,n,m);
        }
        if(valid(board,x-1,y,n,m)){
            helper(board,x-1,y,n,m);
        }
        if(valid(board,x,y+1,n,m)){
            helper(board,x,y+1,n,m);
        }
        if(valid(board,x,y-1,n,m)){
            helper(board,x,y-1,n,m);
        }
        
    }
    
    void solve(vector<vector<char>>& board) {
          int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            int j=0;
            if(board[i][j]=='O'){
                helper(board,i,j,n,m);
            }
            j=m-1;
            if(board[i][j]=='O'){
                helper(board,i,j,n,m);
            }
        }
        for(int j=0;j<m;j++){
            int i=0;
            if(board[i][j]=='O'){
                helper(board,i,j,n,m);
            }
            i=n-1;
            if(board[i][j]=='O'){
                helper(board,i,j,n,m);
            }
        }
        convert(board,n,m);
    }
};
