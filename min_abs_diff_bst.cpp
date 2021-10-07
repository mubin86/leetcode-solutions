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
   priority_queue <int, vector<int>, greater<int> > pq;
    int result = INT_MAX;
    void finddif(TreeNode* root){
        if(!root){
            return;
        }
       pq.push(root->val); 
        finddif(root->left);
        finddif(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        finddif(root);
        while(!pq.empty()){
            int t1=pq.top();
                    pq.pop();          
            if(pq.empty()){
                return result;
            }
            int t2= pq.top();
            int temp = abs(t1-t2);
            if(temp<result){
                result = temp;
            }
        }
        return result;;
    }
};