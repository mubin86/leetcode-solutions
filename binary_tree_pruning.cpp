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
    TreeNode* deleteNode(TreeNode* root)
    {
        if(!root) return NULL;
        
        if(root->left)
        {
            root->left=deleteNode(root->left);
        }
        
        if(root->right)
        {
            root->right=deleteNode(root->right);
        }
        
        if(root->val==0 && root->left==NULL && root->right==NULL)
        {
            return nullptr;
        }
       
        
        return root;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        if(!root) return NULL;
        
        root=deleteNode(root);
        
        return root;
        
    }