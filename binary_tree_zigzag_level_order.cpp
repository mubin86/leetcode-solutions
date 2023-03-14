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
    vector<vector<int>>ans;
    map<int, vector<int>>m;
    
    void traverse(TreeNode* root, int level){
        if(!root){
            return;
        }

        vector<int>temp;
        if(m.find(level) != m.end()){
            temp = m[level];
            if(level % 2 != 0){
                temp.insert(temp.begin(), root->val);
            }else{
                temp.push_back(root->val);
            }
             m[level] = temp;
        }else{
            temp.push_back(root->val);
            m[level] = temp;
        }

        traverse(root->left, level+1);
        traverse(root->right, level+1);
    }



    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        traverse(root, 0);

        for(auto it = m.begin(); it != m.end(); it++){
            ans.push_back(it->second);
        }

        return ans;
    }
};