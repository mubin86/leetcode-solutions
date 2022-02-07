class Solution {
public:

    priority_queue <int, vector<int>, greater<int>> pq;
    
    void find(TreeNode* root){
        if(!root){
            return ;
        }
        
        pq.push(root->val);
        
        find(root->left);
        find(root->right);
        
    }
    
    
    int minDiffInBST(TreeNode* root) {
        find(root);
        
        int result = INT_MAX;
        
        while(!pq.empty()){
             int temp1 = pq.top();
                        pq.pop();
            
            if(pq.empty()){
                return result;
            }
             
            int temp2 = pq.top();
                  
            if(abs(temp1-temp2) < result){
                
                result = abs(temp1-temp2);
            }
            
        }
        
     
        return result;
    }
};