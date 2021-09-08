class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       
        ListNode* prev;
        
        if(head == NULL){
            return head;
        }
        
        
        while(head->val == val){
            head = head->next;
            if(head == NULL){
                break;
            }
        }
        
        ListNode* current = head;
        
        while(current != NULL){
        
            if(current->val == val){
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