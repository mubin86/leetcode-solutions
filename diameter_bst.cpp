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
    int maxi = -1;
    
    int height(TreeNode *root)
    {
        if( root == NULL ) return 0;
        
        int left = height ( root -> left);
        int right = height ( root -> right);
        
        if(left > right){
            return left+1;
        }
            return right+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        
        int left = height(root-> left);
        int right = height(root -> right);
        cout<<"left is "<<left;
        cout<<"right is "<<right;
        
        maxi = max(maxi, left+ right);
        
        diameterOfBinaryTree(root -> left);
        diameterOfBinaryTree(root -> right);
        
        cout<<"maxi is "<<maxi<<" ";
        
        return maxi;

        
    }
};