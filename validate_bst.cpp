class Solution {
public:
   
    bool isValid(TreeNode* root, long long minVal,long long maxVal){
        if(!root){
            return true;
        }
        
        if(root->val <= minVal || root->val >= maxVal){
            return false;
        }
        
        return isValid(root->left, minVal, root->val) &&
        isValid(root->right, root->val, maxVal);
        
    }
    
    
    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
        
    }
};