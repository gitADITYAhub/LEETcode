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
    
    int preIndex=0;
    
    TreeNode*build(vector<int>& preorder, vector<int>& inorder,int s,int e){
        if(s>e)
            return NULL;
        TreeNode*root=new TreeNode(preorder[preIndex]);
        preIndex++;
        int inIndex;
        for(int i=s;i<e;i++){
            if(inorder[i]==root->val){
                inIndex=i;
                break;
            }
        }
        root->left=build(preorder,inorder,s,inIndex-1);
        root->right=build(preorder,inorder,inIndex+1,e);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root=build(preorder,inorder,0,inorder.size()-1);
        return root;
    }
};