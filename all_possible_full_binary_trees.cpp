class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        
        //not possible to craete any full binary tree with even nodes 0r,***i=i+2///
        // if(n%2==0) return ans;
        
        if(n==1){
            TreeNode* node = new TreeNode();
            ans.push_back(node);
            return ans;
        }
        
        for(int i=1; i<n ; i = i+2){
            
            vector<TreeNode*> x = allPossibleFBT(i);
            
            vector<TreeNode*> y = allPossibleFBT(n-i-1);
            
//             for(int j=0;j<x.size();j++){
//                 for(int k=0;k<y.size();k++){
                    
//                     TreeNode* node = new TreeNode();
//                     node->left = x[j];
//                     node->right = y[k];
//                     ans.push_back(node);
                
//                 }
//             }
            
            for(auto left: x){
                for(auto right: y){
                    TreeNode* root = new TreeNode();
                    
                    root->left=left;
                    root->right=right;
                    
                    ans.push_back(root);
                }
            }
            
        }
        
        return ans;
    
    }
    
};