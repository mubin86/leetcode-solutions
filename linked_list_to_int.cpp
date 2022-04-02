class Solution {
public:
    int getDecimalValue(ListNode* head) {
       string s = "";
        
        while(head != NULL){
            s += to_string(head->val);
            head= head->next;
            
        }
        
        return stoi(s, nullptr, 2);
        
    }
};