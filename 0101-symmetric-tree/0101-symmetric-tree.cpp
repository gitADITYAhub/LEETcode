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
    bool mirror(TreeNode* r1,TreeNode*r2){
        if(r1==NULL and r2==NULL)
            return true;
        if(r1 and r2 and r1->val==r2->val)
            return mirror(r1->left,r2->right) and mirror(r1->right,r2->left);
        return false;
    }
    
    
    bool isSymmetric(TreeNode* root) {
        return mirror(root,root);
    }
    
    
//     bool mirror(TreeNode*r1,TreeNode*r2){
//         if(r1==NULL and r2==NULL){
//             return true;
//         }
//         else if((r1 and !r2) or (!r1 and r2))
//             return false;
//         else{
//             if(r1->val==r2->val and mirror(r1->left,r2->right) and mirror(r1->right,r2->left))
//                 return true;
//             else{
//                 return false;
//             }
//         }
//     }
    
//     bool isSymmetric(TreeNode* root){
//         if(root==NULL)
//             return true;
//         return mirror(root->left,root->right);
//     }
};