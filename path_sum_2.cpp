class Solution {
public:
    vector<vector<int>>result; 
   
    void dfs(TreeNode* root, int targetSum, int currentSum, vector<int>&temp ){
        if(!root){
            return;
        }

        temp.push_back(root->val);

        dfs(root->left, targetSum, currentSum+root->val, temp);
        dfs(root->right, targetSum, currentSum+root->val, temp);
        if(currentSum+root->val == targetSum && !root->left&& !root->right){
            result.push_back(temp);
        }
        temp.pop_back();
   }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        dfs(root, targetSum, 0, temp);
        return result;
    }
};