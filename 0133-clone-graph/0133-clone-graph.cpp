/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node*dfs(Node*cur,unordered_map<Node*,Node*>&map){
        vector<Node*>nb;
        Node*clone=new Node(cur->val);
        map[cur]=clone;
        for(auto it:cur->neighbors){
            if(map.find(it)!=map.end()){
                nb.push_back(map[it]);
            }
            else{
                nb.push_back(dfs(it,map));
            }
        }
        clone->neighbors=nb;
        return clone;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>map;
        if(node==NULL) return NULL;
        if(node->neighbors.size()==0){
             Node*clone=new Node(node->val);
        return clone;
            }
        return dfs(node,map);
    }
};