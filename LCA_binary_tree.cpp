class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return NULL;
        }
        
        if(root == p || root == q){
            return root;
        }
        
        TreeNode* l = lowestCommonAncestor(root->left, p, q);
        TreeNode* r = lowestCommonAncestor(root->right, p, q);
        
        if(l == NULL && r == NULL){
            return NULL;
        }
        if(l != NULL && r != NULL){
            return root;
        }
        
        if(!l){
            return r;
        }else{
            return l;
        }
        
    }
};