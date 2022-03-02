class Solution {
public:
    // bool flag1 = true;
    // bool flag2 = true;
    
//     void compare(TreeNode* root1, TreeNode* root2){
//          if(!root1 || !root2){
//             return;
//         }
        
        
//         if(root1->left == NULL ){
//             flag1 = flag1 & (root2->left == NULL & root1->val == root2->val);
//         }
        
//         // if(root2->right == NULL){
//         //     flag2 = flag2 & (root2->left == NULL & root2->val == root1->val);
//         // }
        
//         compare(root1->left, root2->left);
//         compare(root1->right, root2->right);
//     }
    

    
   void findLeaf(TreeNode* root, vector<int>&leaf){
       if(!root){
           return;
       }
       
       if(root->left == NULL && root->right == NULL){
           leaf.push_back(root->val);
       }
       
       findLeaf(root->left, leaf);
       findLeaf(root->right, leaf);
       
   }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf1;
        vector<int>leaf2;
        
        findLeaf(root1, leaf1);
        findLeaf(root2, leaf2);
        
        if(leaf1 == leaf2){
            return true;
        }
        
            return false;
    
    }
};