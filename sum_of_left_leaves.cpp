class Solution {
public:
    int sum = 0;
    void findSum(TreeNode* root, bool flag){     
        if(!root){
            return;
        }
 
        if(root->left==NULL && root->right==NULL && flag==true){
            sum += root->val;
        }
        
        findSum(root->left, true);
        findSum(root->right, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {   
        findSum(root, false);
        return sum;
    }
};