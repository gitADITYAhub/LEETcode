// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
    
//     bool papath(TreeNode* root,vector<TreeNode*> &path,TreeNode* x){
//         if(!root)
//             return false;
//         path.push_back(root);
//         if(root==x){
//             return true;
//         }
        
//         if( papath(root->left,path,x) || papath(root->right,path,x)){
//             return true;
//         }
        
//         path.pop_back();
//         return false;
    
//     }
    
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode*>ppath,qpath;
//         if(!papath(root->left,ppath,p) || !papath(root->right,qpath,q))
//             return NULL;
//         TreeNode*ans=NULL;
//         for(int i=0; i<ppath.size() && i<qpath.size(); i++){
//             if(ppath[i] == qpath[i])
//                 ans = ppath[i];
//         }
//         return ans;
//     }
// };

class Solution {
public:
    
    bool findPath(TreeNode* root,  vector<TreeNode*> &path, TreeNode* n){
        if(root == NULL)
            return false;
        path.push_back(root);
        if(root == n) return true;
        
        if( findPath(root->left, path, n) || findPath(root->right, path, n) )
            return true;
        
        path.pop_back();
        return false;
    }
    

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
        vector<TreeNode*> path1, path2;
        if( !findPath(root, path1, p) || !findPath(root, path2, q)  )
            return NULL;
        TreeNode* ans = NULL;
        for(int i=0; i<path1.size() && i<path2.size(); i++){
            if(path1[i] == path2[i])
                ans = path2[i];
        }
        return ans;
        
    }

};