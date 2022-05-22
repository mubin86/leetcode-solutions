class Solution {
public:
    int count = 0;
    
    void goodNode(TreeNode* root, int maxVal){
        if(!root){
            return;
        }
        
        if(root->val >= maxVal){
            count += 1;
            maxVal = root->val;
        }
        
        goodNode(root->left, maxVal);
        goodNode(root->right, maxVal);
        
    }
    
    
    int goodNodes(TreeNode* root) {
        goodNode(root, root->val);
        
        return count;
    }
};