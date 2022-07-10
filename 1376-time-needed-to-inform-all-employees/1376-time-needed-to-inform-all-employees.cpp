class Solution {
public:
    unordered_map<int,vector<int>>um;
    int ans=0,mx=0;
    
    void dfs(int manager,vector<int>& informTime){
        mx=max(ans,mx);
        for(auto emp:um[manager]){
            ans+=informTime[manager];
            dfs(emp,informTime);
            ans-=informTime[manager];
        }
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for(int i=0;i<n;i++){
            int val=manager[i];
            if(val!=-1)
                um[val].emplace_back(i);
        }
        dfs(headID,informTime);
        return mx;
    }
};