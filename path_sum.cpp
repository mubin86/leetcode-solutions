class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false;
        
        targetSum -= root->val;
        
        if(!root->left && !root->right){
            if(targetSum == 0){
                return true;
            }
        }
        
        int l = hasPathSum(root->left, targetSum);                                         int r = hasPathSum(root->right,targetSum);
        
        if(l || r){
            cout<<"true is called"<<endl;
            return true;
        }else{
            cout<<"false is called"<<endl;
            return false;
        }
    }
    
};