class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        
        ListNode* current = head;
        
        while(current != NULL){
            st.push(current->val);
            current = current->next;
        }
        
        while(!st.empty()){
            int temp = st.top();
                        st.pop();
            
            if(head->val != temp){
                return false;
            }
            
            head= head->next;
        }
        
        return true;
    }
};