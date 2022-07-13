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
    void inorder(TreeNode* root,vector<int>&v){
        if(root==NULL)
            v.emplace_back(100000);
        else{
        inorder(root->left,v);
        v.emplace_back(root->val);
        inorder(root->right,v);
        }
    }
    
    void preorder(TreeNode* root,vector<int>&v){
        if(root==NULL)
            v.emplace_back(100000);
        else{
        v.emplace_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if(p==NULL and q==NULL)
        //     return true;
        // if(p==NULL or q==NULL)
        //     return false;
        // return (p->val==q->val and isSameTree(p->left,q->left) and isSameTree(p->right,q->right));
        vector<int>a,b,c,d;
        // vector<int>b;
        inorder(p,a);
        inorder(q,b);
        preorder(p,c);
        preorder(q,d);
        // if(a.size()!=b.size())
        //     return false;
        // for(int i=0;i<a.size();i++){
        //     if(a[i]!=b[i])
        //         return false;
        // }
        
        // return true;       
        
        if(a==b and c==d)
            return true;
        return false;
    }
};