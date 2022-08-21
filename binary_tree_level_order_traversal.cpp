class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>result;
        
        if(root== NULL){
            return result;
        }
       
        queue<TreeNode*> q;
        vector<int>temp;
        
        q.push(root);
        q.push(NULL); 
        
        while(!q.empty()){
            auto node = q.front();
                        q.pop();
            
            if(node == NULL){
                if(!q.empty()){
                    q.push(NULL);
                }
                
                result.push_back(temp);
                temp.clear();
                
            }else{
                temp.push_back(node->val);
                
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            
        }
        
        
        return result;
    }
};