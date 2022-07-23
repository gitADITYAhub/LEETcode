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
    
//     void invert(TreeNode* root){
//         if(root->left!=NULL and root->right!=NULL)
//            swap(root->left,root->right);
//          if(root->left==NULL){
//             TreeNode* temp=root->right;
//                         root->right==NULL;

//             root->left=temp;
//         }
//         if(root->right==NULL){
//             TreeNode* temp=root->left;
//             root->left==NULL;

//             root->right=temp;
//         }
//     }
    
    TreeNode* invertTree(TreeNode* root) {
        
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->left==NULL and root->right==NULL){
//             return root;
//         }
// //         if(root->left==NULL){
// //             TreeNode* temp=root->right;
// //                         root->right==NULL;

// //             root->left=temp;
// //         }
// //         if(root->right==NULL){
// //             TreeNode* temp=root->left;
// //             root->left==NULL;

// //             root->right=temp;
// //         }
        
//         invert(root);
//         if(root->left)
//         invert(root->left);
//         if(root->right)
//         invert(root->right);
//         return root;
        
        if(root==NULL)
            return NULL;
        
        else{
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left,root->right);
        }
        
        
        
        
        
        
        
        return root;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};