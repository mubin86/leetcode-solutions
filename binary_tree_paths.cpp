class Solution {
public:
    void solve(TreeNode* root, vector<string>&v, string ans)
    {
        if(root==NULL)
            return ;
        if(root->left==NULL && root->right==NULL)
        {
            ans+=to_string(root->val);
            v.push_back(ans);   
            return;
        }
        ans+=to_string(root->val)+"->";
        solve(root->left,v,ans);
        solve(root->right,v,ans);
  
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string ans="";
        solve(root,v,ans);
        return v;
    }
};