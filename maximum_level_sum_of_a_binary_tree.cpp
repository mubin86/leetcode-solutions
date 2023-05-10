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
    int maxLevelSum(TreeNode* root) {
        int result = 1;
        int level = 1;
        int eachLevelSum = 0;
        int prevSum = INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            while(1){
                TreeNode* node = q.front();
                                 q.pop();
                
                if(node == NULL){
                    if(eachLevelSum > prevSum){
                        prevSum = eachLevelSum;
                        result = level;
                    }
                    break;
                }else{
                    eachLevelSum += node->val;
                    if(node->left){
                        q.push(node->left);
                    }
                    if(node->right){
                        q.push(node->right);
                    }
                }
            }

            eachLevelSum = 0;
            if(!q.empty()){
                q.push(NULL);
            }
            level++;
        }

        return result;
    }
};