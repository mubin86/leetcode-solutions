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
    unordered_map<int, int>m;
    // map<int, int, greater <int> > mymap; // it works  like pq
    priority_queue<pair<int, int>>pq;
    
    void find(TreeNode* root){
        if(!root){
            return;
        }
        
        m.insert({root->val, m[root->val]++});
        
        find(root->left);
        find(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        find(root);
        
        unordered_map<int, int>::iterator it;
        
        for(it = m.begin(); it!= m.end(); it++){
              pq.push(make_pair(it->second, it->first));
        }
        
        pair<int , int> p =pq.top();
                        pq.pop();
        
        int temp = p.first;
        ans.push_back(p.second);
        
        while(!pq.empty()){
             pair<int , int> q =pq.top();
                                pq.pop();
            
            if(temp == q.first){
                ans.push_back(q.second);
            }else{
                break;
            }
        }
        
        return ans;
    }
};