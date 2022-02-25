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
    priority_queue<int, vector<int>, greater<int> > pq;
    
    void traverse(TreeNode* root){
        if(!root){
            return ;
        }
        
        pq.push(root->val);

        traverse(root->left);
        traverse(root->right);
        
    }
    
    
    
    TreeNode* increasingBST(TreeNode* root) {
        
        traverse(root);
        
       int temp = pq.top();
                pq.pop();
        
        TreeNode* startNode = new TreeNode(temp);
        startNode->left = NULL; 
        
        TreeNode* head = startNode;        
        
        while(!pq.empty()){
            
             temp = pq.top();
                        pq.pop();
            
            
            TreeNode* newNode = new TreeNode(temp);
            
            startNode->right = newNode;
            
            newNode->left = NULL;
            
            startNode = newNode;
            
        }
        
        startNode->right = NULL;
        
        return head;
        
    }
};