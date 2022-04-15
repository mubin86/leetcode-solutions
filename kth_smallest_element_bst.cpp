class Solution {
public:
    priority_queue <int, vector<int>, greater<int>>pq;
    
    void traverse(TreeNode* root){
        if(!root){
            return;
        }
        
        pq.push(root->val);

        traverse(root->left);
        traverse(root->right);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        traverse(root);
        
        int i = 0;
        int result;
        while(i < k){
            result = pq.top();
            pq.pop();
            i++;
        }
        
        return result;
    }
};