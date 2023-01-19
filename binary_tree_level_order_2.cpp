class Solution {
public:
    map<int, vector<int>>m;
    vector<int>temp;
    void dfs(TreeNode* root, int level){
        if(!root){
            return;
        }

        temp = m[level];
        temp.push_back(root->val);
        m[level] = temp;

        dfs(root->left, level+1);
        dfs(root->right, level+1);
    }


    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>result;
        dfs(root, 0);
        for (auto it = m.rbegin(); it != m.rend(); it++) {
            result.push_back(it->second);
        }

        return result;
    }
};