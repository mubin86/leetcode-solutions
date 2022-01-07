class Solution {
public:
    
    unordered_map<int, int>m;
    // bool result= false;
    
//     void find(TreeNode* root, int k){
//         if(!root){
//             return;
//         }
        
//         if(m.find(k-(root->val)) != m.end()){
//             result = true;
//             return;
//         }
     
//         m[root->val] = root->val;
        
//         findTarget(root->left, k); 
//         findTarget(root->right, k);
//     }
    
    bool findTarget(TreeNode* root, int k) {
      // find(root, k);
      //   if(result){
      //       return true;
      //   }
      //   return false;
        
        if(!root){
            return false;
        }
        
        if(m.find(k-(root->val)) != m.end()){
            
            return true;
        }
     
        m[root->val] = root->val;
        
        return findTarget(root->left, k) ||
        findTarget(root->right, k);
    }
};