class Solution {
public:
    vector<int>result;
    
    void find(Node* root){
        if(!root){
            return ;
        }
        
        result.push_back(root->val);
        
        
       // for (auto child : root->children) {
       //      find(child);
       //  }
        
         for(int i = 0; i < root->children.size(); i++){
            find(root->children[i]);
        }
        
    }
    
    vector<int> preorder(Node* root) {
        find(root);
        
        return result;
    }
};