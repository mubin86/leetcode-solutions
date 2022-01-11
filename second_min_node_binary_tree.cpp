class Solution {
public:
    set<int> s;
        
    void find(TreeNode* root){
        if(!root){
            return;
        }
        s.insert(root->val);
    
        find(root->left);
        find(root->right);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        find(root);
        s.erase(s.begin());
        
        if(s.size() == 0){
            return -1;
        }
        
        return *s.begin();
    }
};