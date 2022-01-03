class Solution {
public:
//     vector<double>result;
//     vector<int>count;
    
//     void findAvergae(TreeNode* root, int level){
//         if(!root){
//             return;
//         }
        
//         if(level > result.size()){
//             result.push_back((double)root->val);
//               count.push_back(1);  
//         }else{
//               result[level-1] += (double)root->val;
//             count[level-1] += 1;
//         }
        
//         findAvergae(root->left, level+1);
//         findAvergae(root->right, level+1);
        
//     }
    
//     vector<double> averageOfLevels(TreeNode* root) {
//         findAvergae(root, 1);
//         vector<double>average;
//         for(int i =0; i<result.size(); i++){
//                 average.push_back((double) (result[i] / count[i]));        
//         }
        
        
//         return average;
        
//     }
    
    
    //******Using level order traversal****
    vector<double> averageOfLevels(TreeNode* root) {
    
        vector<double>result;
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){  
            double size = q.size();
            double tempsize = size;
            double sum = 0;
   
            while(size){
                TreeNode* temp = q.front();
                q.pop();
            
                sum += temp->val;
                
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                
                size--;
            }
            
            result.push_back(sum/tempsize);
        }
       
        
        return result;
        
    }
};