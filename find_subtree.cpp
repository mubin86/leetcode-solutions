class Solution {
public:
    
    bool findSubTree(TreeNode* root, TreeNode* subRoot){
        
        if(root== NULL && subRoot == NULL){
            return true;
        }
        
        if(root == NULL && subRoot != NULL){
            return false;
        }
         if(root != NULL && subRoot == NULL){
            return false;
        }
        
        return (root->val == subRoot->val) && 
                findSubTree(root->left, subRoot->left) &&
                findSubTree(root->right, subRoot->right);
    } 
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot!=NULL){
            return false;
        }        
        if(subRoot==NULL && root!=NULL){
            return false;
        }   
        
        if(findSubTree(root, subRoot)){
            return true;
        }
        
        return findSubTree(root->left, subRoot) || 
                findSubTree(root->right, subRoot);
            
    }
};