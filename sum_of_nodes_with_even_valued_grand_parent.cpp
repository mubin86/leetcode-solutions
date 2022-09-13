class Solution {
public:
    int sum = 0;
    void findSum(TreeNode* root, TreeNode* parent, TreeNode* grandParent){
        if(!root){
            return;
        }
        
        if(grandParent){
            if(grandParent->val % 2 == 0){
                sum += root->val;
            }
        }
        
        findSum(root->left, root, parent);
        findSum(root->right, root, parent);
        
    }
    
    
    int sumEvenGrandparent(TreeNode* root) {
        findSum(root, NULL, NULL);
        
        return sum;
    }
};