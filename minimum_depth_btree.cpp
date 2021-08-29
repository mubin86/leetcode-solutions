class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        
        int ldepth = minDepth(root->left);
        int rdepth = minDepth(root->right);
        

        if(ldepth != 0 && ldepth< rdepth || rdepth == 0){
            return ldepth+1;
        }
        return rdepth+1;
    }
};