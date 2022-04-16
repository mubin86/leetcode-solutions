class Solution {
public:
    void invert(TreeNode* root){
        if(!root){
            return;
        }
        
        if(root->left != NULL){
            int leftVal = root->left->val;
            
            if(root->right != NULL){
                int rightVal = root->right->val;
                TreeNode* temp = root->left;
                root->left = root->right;
                root->right = temp;
            }else{
                TreeNode* temp1 = root->left;
                root->left =  NULL;
                root->right =temp1;
            }
        }else{
              if(root->right != NULL){
                int rightVal = root->right->val;
                  root->left = root->right;
                  root->right = NULL;
              }
        }
        
        invert(root->left);
        invert(root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        
        return root;
    }
};