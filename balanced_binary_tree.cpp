class Solution {
public:
     bool ans;
    int helper(TreeNode* root)
    {
        if(root==NULL){
            return 0; 
        }
    
     
        int left=helper(root->left);
        int right=helper(root->right);
        
        if(abs(left-right)>1){
                ans=false; 
        }
           
        if(left>right){
            return left+1;
        }
            return right+1;
    }
    bool isBalanced(TreeNode* root) {
        ans=true;
        int x=helper(root);
        return ans;
    }
};