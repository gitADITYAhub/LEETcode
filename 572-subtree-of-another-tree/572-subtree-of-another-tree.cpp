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
    
    bool identical(TreeNode* root1, TreeNode* root2){
        if(root1==NULL and root2==NULL)
            return true;
        if(root1==NULL or root2==NULL)
            return false;
        
        return (root1->val==root2->val and identical(root1->left,root2->left) and identical(root1->right,root2->right));
        
        
    }
    
    bool isSubtree(TreeNode* root, TreeNode* sub) {
        if(sub==NULL)
            return true;
        if(root==NULL)
            return false;
        if(identical(root,sub))
            return true;
        
        return (isSubtree(root->left,sub) or isSubtree(root->right,sub));
        
    }
};