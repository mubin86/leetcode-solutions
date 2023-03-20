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
    TreeNode* findMin(TreeNode* curr){
        while(curr->left != NULL){
            curr = curr->left;
        }
        return curr;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return NULL;
        }

        if(key < root->val){
            root->left = deleteNode(root->left, key);
        }else if(key > root->val){
            root->right = deleteNode(root->right, key);
        }else{
            if(root->left == NULL && root->right ==NULL){
                delete root;
                root = NULL;
            }else if(root->left == NULL){
                 TreeNode* temp = root;
                 root = root->right;
                 delete temp;
                    
            }else if(root->right == NULL){
                TreeNode* temp = root;
                root = root->left;
                delete temp;
                   
            }else{
                TreeNode* temp = findMin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right, temp->val);
            }
           
        }

        return root;
    }
};