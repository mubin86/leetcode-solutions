class Solution {
public:
    int maxDepth(TreeNode* root) {
          if(root == NULL){
            return 0;
        }
        
        int ldepth = maxDepth(root->left);
        int rdepth = maxDepth(root->right);
        
        if(ldepth > rdepth){
            return ldepth+1;
        }else{
            return rdepth+1;
        }
        
    }
}