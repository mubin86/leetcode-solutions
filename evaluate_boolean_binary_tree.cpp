class Solution {
public:
    bool evaluate(TreeNode* root, TreeNode* parent){
       if(!root){
            if(parent->val == 1){
                return true;
            }else{
                return false;
            }
        }
        
        bool left = evaluate(root->left, root);
        bool right = evaluate(root->right, root);
        
        if(root->left == NULL && root->right == NULL){
            return left & right;
        }else{
            if(root->val == 2){
                return left | right;
            }else{
                return left & right;
            }
        }
    }
    
    bool evaluateTree(TreeNode* root) {
       return evaluate(root, NULL);
    }
};