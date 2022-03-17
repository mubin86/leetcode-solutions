class Solution {
public:
    string temp = "";
    vector<string>result;
    
    void sum(TreeNode* root){
        if(!root){
            return;
        }
        
        temp += to_string(root->val);
        
        if(root->left == NULL && root->right == NULL){
            result.push_back(temp);
        }
        sum(root->left);
        sum(root->right);
        
        if(!temp.empty()){
            temp.pop_back();  
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {  
        sum(root);
        int sum = 0;
          
        for(int i = 0 ; i< result.size(); i++){
            
            bitset<32>bits(result[i]);
            int temp = (int) bits.to_ulong();
            sum += temp;
        }
  
        return sum;
    }
};