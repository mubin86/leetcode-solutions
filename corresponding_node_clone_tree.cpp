class Solution {
public:
    TreeNode* result = NULL;
    
    void find(TreeNode* cloned, TreeNode* target){
        if(!cloned){
            return;
        }
        
        if(cloned->val == target->val){
            result = cloned;
        }
        
        
        find(cloned->left, target);
        find(cloned->right, target);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        find(cloned, target);
        return result;
    }
};