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
    void insert(TreeNode* root, int val, bool l, bool r, TreeNode* prev){
        if(!root){
            TreeNode* node = new TreeNode(val);
            if(l){
                prev->left = node;
            }else{
                prev->right = node;
            }
            return;
        }

        if(val < root->val){
            insert(root->left, val, true, false, root);
        }else if(val > root->val){
            insert(root->right, val, false, true, root);
        }
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* node = new TreeNode(val);
            return node;
        }
        insert(root, val, false, false, NULL);
        return root;
    }
};