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
    int solve(TreeNode*root,int &res){
        if(root==NULL)
            return 0;
        int left=max(solve(root->left,res),0);
        int right=max(solve(root->right,res),0);
        res=max(res,root->val+left+right);
        return max(left,right)+root->val;
        // int temp=max(max(l,r)+root->val,root->val);
        // int ans=max(temp,root->val+l+r);
        // res=max(res,ans);
        // return temp;
    }
    
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        solve(root,res);
        return res;
        
    }
};