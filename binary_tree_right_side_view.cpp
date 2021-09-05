class Solution {
public:
    vector<int>ans;
    int min_height = INT_MIN;
    void view(TreeNode* root, int height){
        if(!root){
            return;
        }
        
        if(height > min_height){
            min_height = height;
            ans.push_back(root->val);
        }
       
        
        view(root->right, height+1);
        view(root->left, height+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        view(root, 0);
        
        return ans;
    }
};