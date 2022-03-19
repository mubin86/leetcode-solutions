class Solution {
public:
    
    int val = INT_MIN; 
    multiset<int>ms;
    
    void findMin(TreeNode* root){
        if(!root){
            return ;
        }
        
        ms.insert(root->val);
        
        findMin(root->left);
        
        auto it1 = ms.begin();
        
        auto it2 = ms.rbegin();
   
        val = max(val, abs(*it1 - *it2)); 
        
        findMin(root->right);
       
        ms.erase(ms.find(root->val));
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        findMin(root);
        
        return val;
    }
};