class Solution {
public:
    
    int maxLevel = INT_MIN;
    int sum = 0;
    void traverse(TreeNode* root, int level){
        if(!root){
            return;
        }
        
        if(level > maxLevel)
        {
            sum = root->val;
            maxLevel = level;
        } 
        else if(level == maxLevel)
        {
            sum = sum + root->val;
        }
        
        traverse(root->left, level+1);

        traverse(root->right, level+1);

        
    }
    
    
    int deepestLeavesSum(TreeNode* root) {
        
        traverse(root, 0);
        
        return sum;
    }
};