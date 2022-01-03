class Solution {
public:
    void solve(TreeNode * root,int val,int dep)
    {    if(root==NULL) {
                return;
        }
     
        if(dep==1)
        {
            TreeNode* head=new TreeNode(val);
            
            head->left=root->left;
            root->left=head;
            
            TreeNode *headright=new TreeNode(val);
            headright->right=root->right;
            root->right=headright;
            
            return ;
        }
        else{
            solve(root->left,val,dep-1);
            solve(root->right,val,dep-1);
        }
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* head=new TreeNode(val);
            head->left=root;
            return head;
        }
      
        
        solve(root,val,depth-1);
        return root;
    }
};