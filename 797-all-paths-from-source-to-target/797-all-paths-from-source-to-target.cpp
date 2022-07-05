class Solution {
public:
    
    void dfs(int src,vector<int>&cur,vector<vector<int>>&graph,int dest,vector<vector<int>>&res){
        if(src==dest){
            res.emplace_back(cur);
            return;
        }
        for(auto a:graph[src]){
            cur.emplace_back(a);
            dfs(a,cur,graph,dest,res);
            cur.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        vector<int>cur;
        cur.emplace_back(0);
        dfs(0,cur,graph,graph.size()-1,res);
        return res;
    }
};