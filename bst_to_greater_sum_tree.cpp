class Solution {
public:
    
    int solve(TreeNode *root, int sum=0) {
        if(root== NULL) {
            return sum;
        }
        
        else {
            sum= solve(root->right, sum);
            
            sum += root->val;
            
            root->val=sum;
            
            sum = solve(root->left, sum);
            
            return sum;
        }
    }
    
    
    TreeNode* bstToGst(TreeNode* root) {
       
        solve(root);
        return root;
    }
};