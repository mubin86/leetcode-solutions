class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        
        while(head != NULL){
            
            ListNode* temp = head;
            int currentVal = temp->val;
            bool flag = false;
            
            while(temp != NULL){   
                temp = temp->next;
                
                if(temp != NULL){
                    if(temp->val > currentVal){
                        flag = true;
                        ans.push_back(temp->val);
                        break;
                    } 
                }
                
            }
            
            if(!flag){
                ans.push_back(0);
            }
            
            head = head->next;
        }
        
        return ans;
    }
};