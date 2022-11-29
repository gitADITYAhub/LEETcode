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
    
        // vector<bool>vis(n,false),dfsvis(n,false),cycle(n,false);
        // for(int i=0;i<n;i++){
        //     if(!vis[i]){
        //         helper(i,vis,dfsvis,cycle,graph);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(!cycle[i]){
        //         ans.emplace_back(i);
        //     }
        // }
        // return ans;
        
        int n = graph.size();
	vector<vector<int>> adj(n);
	vector<int> indegree(n, 0);
	int i = 0;
	
	// Reverse Edges of graph
	for(auto& g : graph) {
		for(auto& it : g) {
			adj[it].push_back(i);
			indegree[i]++;
		}
		i++;
	}

	// Topo Sort
	queue<int> q;

	for(int i=0; i<n; i++) {
		if(indegree[i] == 0) q.push(i);
	}

	vector<int> safeNodes;

	while(q.size()) {
		int node = q.front(); q.pop();

		safeNodes.push_back(node);

		for(auto& adjnode : adj[node]) {
			if(--indegree[adjnode] == 0) q.push(adjnode);
		}
	}

	sort(safeNodes.begin(), safeNodes.end());

	return safeNodes;
        
    }
};