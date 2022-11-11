//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    bool valid(int i,int j,int n,vector<vector<bool>>&vis){
        return (i>=0 and i<n and j>=0 and j<n and vis[i][j]==false);
    }
    
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int n=N;
	    int tx=KnightPos[0]-1,ty=KnightPos[1]-1;
	    int x1=TargetPos[0]-1,y1=TargetPos[1]-1;
	    
	    if(tx==x1 and ty==y1) return 0;
	    vector<vector<bool>>vis(n,vector<bool>(n,false));
	    queue<pair<int,int>>q;
	    q.push({x1,y1});
	    vis[x1][y1]==true;
	    int ans=0;
	    while(!q.empty()){
	        int size=q.size();
	        ans++;
	        while(size--){
	            pair<int,int>p=q.front();
	            q.pop();
	            int xx=p.first;
	            int yy=p.second;
	            int ax[8]={1,1,-1,-1,2,-2,2,-2};
	            int ay[8]={2,-2,2,-2,1,1,-1,-1};
	            
	            for(int i=0;i<8;i++){
	                int nx=xx+ax[i];
	                int ny=yy+ay[i];
	                
	                if(nx==tx and ny ==ty) return ans;
	                
	                if(valid(nx,ny,n,vis)){
	                    vis[nx][ny]=true;
	                    q.push({nx,ny});
	                }
	            }
	        }
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends