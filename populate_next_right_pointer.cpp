class Solution {
public:
    unordered_map<int, Node*>m;
    void populate(Node* root, int level){
       if(!root){
            return;
        }

        auto it = m.find(level);
        if(it != m.end()){
            it->second->next = root;
        } 
        m[level] = root;

        populate(root->left, level+1);
        populate(root->right, level+1);
    }

    Node* connect(Node* root) {
        populate(root, 0);
        return root;
    }
};