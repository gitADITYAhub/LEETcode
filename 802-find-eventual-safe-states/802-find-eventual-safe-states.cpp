class Solution {
public:
    bool helper(int i,vector<bool>&vis,vector<bool>&dfsvis,vector<bool>&cycle,vector<vector<int>>& graph){
        vis[i]=true;
        dfsvis[i]=true;
        
        vector<int>data=graph[i];
        for(auto u:data){
            if(!vis[u]){
                if(helper(u,vis,dfsvis,cycle,graph)){
                     return cycle[i]=true;
                }
            }
            else if(vis[u]==true and dfsvis[u]==true){
                return cycle[i]=true;
            }
        }
        dfsvis[i]=false;
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n=graph.size();
        vector<bool>vis(n,false),dfsvis(n,false),cycle(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                helper(i,vis,dfsvis,cycle,graph);
            }
        }
        for(int i=0;i<n;i++){
            if(!cycle[i]){
                ans.emplace_back(i);
            }
        }
        return ans;
        
    }
};