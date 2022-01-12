class Solution {
public:
    
    TreeNode* node = NULL;

    void search(TreeNode* root, int val){
        if(!root){
            return;
        }
        
        if(root->val == val){
            node = root;
            return;
        }
        
        search(root->left, val);
        search(root->right, val);
        
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {  
        search(root, val);
        return node;
    }
};