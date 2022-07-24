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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        stack<TreeNode*>st;
        st.push(root);
        
        while(!st.empty() and root!=NULL){
            TreeNode*cur=st.top();
            st.pop();
            if(cur->left==NULL and cur->right==NULL and cur->val==targetSum)
                return true;
            if(cur->left){
                cur->left->val=cur->val+cur->left->val;
                st.push(cur->left);
            }
            if(cur->right){
                cur->right->val=cur->val+cur->right->val;
                st.push(cur->right);
            }
        }
        
        return false;
    }
};