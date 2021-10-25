class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
        vector<int>result;
    
    void find(Node* root){
        if(!root){
            return ;
        }
        
        
        
       // for (auto child : root->children) {
       //      find(child);
       //  }
        
         for(int i = 0; i < root->children.size(); i++){
            find(root->children[i]);
        }
        
         result.push_back(root->val);
        
    }
    
    vector<int> postorder(Node* root) {
        find(root);
        
        return result;
    }
};