class Solution {
public:
    vector<vector<int>>result;
    vector<int>temp;
    
    vector<vector<int>> levelOrder(Node* root) { 
        if(!root){
            return result;
        }
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            Node* current = q.front();
                             q.pop();
       
            if(current == NULL){
                result.push_back(temp);
                temp.clear();
                if(!q.empty()){
                    q.push(NULL); 
                }
                continue;
            }else{
                temp.push_back(current->val); 
            }
        
            
            for(int i=0; i<current->children.size(); i++){
                   q.push(current->children[i]); 
            }

        }

        
        return result;
    }
};