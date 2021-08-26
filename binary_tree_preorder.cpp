class Solution {
public:
    vector<int>result;
    
    void traversal(TreeNode* root){
        if(!root){
            return;
        }
        result.push_back(root->val);
        traversal(root->left);
        traversal(root->right);
    };
    
    vector<int> preorderTraversal(TreeNode* root) { 
        traversal(root);
        return result;
    }
};