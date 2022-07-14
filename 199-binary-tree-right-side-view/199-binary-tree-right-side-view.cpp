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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)
            return ans;
        
        while(1){
            int size=q.size();
            if(size==0)
                return ans;
            int c=0;
            while(size>0){
                TreeNode*temp=q.front();
                q.pop();
                if(c==0){
                    ans.emplace_back(temp->val);
                    
                }
                if(temp->right)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
                c++;
                size--;
            }
        }
        return ans;
    }
};