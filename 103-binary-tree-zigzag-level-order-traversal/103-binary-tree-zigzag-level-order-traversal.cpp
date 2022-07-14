/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
int c=1;
        if(!root){
            return ans;
        }
        
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *temp=q.front();
            if(temp==NULL){
                if(c%2==0){
                    reverse(res.begin(),res.end());
                }
                ans.push_back(res);
                c++;
                res.resize(0);
                q.pop();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{

                q.pop();
                res.push_back(temp->val);
        
                
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        return ans;
    
    }
};