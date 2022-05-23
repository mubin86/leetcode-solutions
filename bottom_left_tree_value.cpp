class Solution {
public:
    int result;
    int maxLevel = INT_MIN;
    
    void find(TreeNode* root, int level){
        if(!root){
            return;
        }
        
        if(level > maxLevel){
            maxLevel = level;
            result = root->val;
        }
        
        find(root->left, level+1);
        find(root->right, level+1);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        
        find(root, 0);
        
        return result;
    }
};