class Solution {
public:
    
    unordered_map<int, int>m;
    
    void find(TreeNode* root, int x, int y, int level){
        if(!root){
            return;
        }
        
        if(root->left != NULL){
            if(root->left->val == x || root->left->val == y){
                 m.insert({root->val, level});
            }
        }
        
        if(root->right != NULL){
            
            if(root->right->val == x || root->right->val == y){
                m.insert({root->val, level});
            }
            
        }
        
        find(root->left, x, y, level+1);
        find(root->right, x, y, level+1);
        
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        find(root, x, y, 0);
        
        if(m.size() != 2){
            return false;
        }
        unordered_map<int, int>:: iterator;
        
        auto it = m.begin();
        
        int parent1 = it->first;
        int level1 = it->second;
        
        it++;
        
        int parent2 = it->first;
        int level2 = it->second;
        
        return parent1 != parent2 and level1 == level2;;
        
    }
};