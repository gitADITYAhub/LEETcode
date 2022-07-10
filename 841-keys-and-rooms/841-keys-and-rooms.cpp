class Solution {
public:
    
    ////DFS
    
    
//     void dfs(vector<vector<int>>& rooms,vector<bool>&visited,int i){
//         visited[i]=true;
//         for(auto v:rooms[i]){
//             if(visited[v]==false)
//                 dfs(rooms,visited,v);
//         }
//     }
    
    
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         int n=rooms.size();
//         vector<bool>visited(n,false);
//         // visited[0]=true;
//         // for(int i=0;i<n;i++){
//         //     if(visited[i]==false){
//         //         dfs(rooms,visited,i,n);
//         //     }
//         // }      
//         dfs(rooms,visited,0);
        
        
//         for(int i=0;i<n;i++){
//             if(visited[i]==false)
//                 return false;
//         }
//         return true;
//     }
    
    
////bfs
    
        bool canVisitAllRooms(vector<vector<int>>& rooms)
        {   int n=rooms.size();
            vector<bool>visited(n,false);
            queue<int>q;
            visited[0]=true;
            q.push(0);
            while(!q.empty()){
                int i=q.front();
                q.pop();
                for(auto v:rooms[i]){
                    if(visited[v]==false){
                        visited[v]=true;
                        q.push(v);
                    }
            }
        }
                    for(int i=0;i<n;i++){
            if(visited[i]==false)
                return false;
        }
        return true;
        }
            
    
    
};



