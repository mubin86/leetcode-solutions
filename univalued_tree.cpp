class Solution {
public:
    
    bool uniValued(TreeNode* root, int value){
        if(!root){
            return true;
        }
        
        if(root->val != value){
           return false;
        }
        
       return uniValued(root->left, value) &
        uniValued(root->right, value);
        
    }
    
    
    bool isUnivalTree(TreeNode* root) {
        value = root->val;
        
        return uniValued(root, value);
        
        // return result;
        
    }
};