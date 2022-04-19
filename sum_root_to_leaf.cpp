class Solution {
public:
    
    string str = "";
    int result = 0;
    
    void sum(TreeNode* root){
        if(!root){
            return;
        }
        
        str += to_string(root->val);
    
        sum(root->left);
        sum(root->right); 
     
        if(!root->left && !root->right){
            int temp = stoi(str);
            result += temp;
        }
         
        str.pop_back();
    }
    
    int sumNumbers(TreeNode* root) {      
        sum(root);
        return result;
    }
};