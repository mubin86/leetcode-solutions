class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
         ListNode* prev = head;
         ListNode* current = prev->next;
        
        while(current != NULL){
            
            if(prev->val == current->val){
                prev->next = current->next;
                current = current->next;
            }else{
                prev = current;
                current = current->next;
            }
    
     
        }
   
        return head;
    }
};