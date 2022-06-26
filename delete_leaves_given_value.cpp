class Solution {
public:
    bool rootNodeDelete = false;
    void remove(TreeNode* root, int target, TreeNode* prev, bool l, bool r){
        if(!root){
            return;
        }
        
        remove(root->left, target, root, true, false);
        remove(root->right, target, root, false, true);
        
        if(root->val == target && root->left == NULL && root->right==NULL){
            if(l){
                prev->left = NULL;
            } else if(r){
                prev->right = NULL;
            }else{
                rootNodeDelete = true;
            }
        }
    }
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        remove(root, target, NULL, false, false);
        return rootNodeDelete ? NULL : root;
    }
};