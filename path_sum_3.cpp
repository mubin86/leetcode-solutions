/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    void traverse(TreeNode* root, long long targetSum){
        if(!root){
            return;
        }   
        if(targetSum == root->val){
            count++;
        }
        traverse(root->left, targetSum - root->val);
        traverse(root->right, targetSum - root->val);
    }

    void dfs(TreeNode* root, int targetSum){
        if(!root){
            return;
        }
        traverse(root, targetSum);
        dfs(root->left, targetSum);
        dfs(root->right, targetSum);
    }

    int pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);       
        return count;
    }
};