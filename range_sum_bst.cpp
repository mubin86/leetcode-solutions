class Solution {
public:
    int total = 0;
    
    void sum(TreeNode* root, int low, int high){
        if(!root){
            return;
        }
        
        if(root->val >=low && root->val <= high){
            total += root->val;
        }
        
        sum(root->left, low, high);
        sum(root->right, low, high);
        
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum(root, low, high);
        
        return total;
    }
};