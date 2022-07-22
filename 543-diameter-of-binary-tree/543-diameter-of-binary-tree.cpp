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
    int h(TreeNode* root){
        if(root==NULL)
            return 0;
        int h1=h(root->left);
        int h2=h(root->right);
        return max(h1,h2)+1;
    }

    int diameterOfBinaryTree(TreeNode* root){
        if(root==NULL)
            return 0;
        int d=h(root->left)+h(root->right);
        int d1=diameterOfBinaryTree(root->left);
        int d2=diameterOfBinaryTree(root->right);
        return max(d,max(d1,d2));
    }
};