class Solution {
public:
    
    void traverse(TreeNode* root, int val, int depth, int d){
        if(!root){
            return;
        }
        
        if(depth-1 == d){
              TreeNode* newNode1 = new TreeNode(val);
              TreeNode* newNode2 = new TreeNode(val);
              TreeNode* leftNode = root->left;
              TreeNode* rightNode = root->right;
              
              root->left = newNode1;
              root->right = newNode2;
              newNode1->left = leftNode;
              newNode2->right = rightNode;
        }
        
        traverse(root->left, val, depth, d+1);
        traverse(root->right, val, depth, d+1);
    }
 
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newNode = new TreeNode(val);
            newNode->left = root;
            newNode->right = NULL;
            
            return newNode;
        }
        
        traverse(root, val, depth, 1);
        
        return root;
        
    }
};