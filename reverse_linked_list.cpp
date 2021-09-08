class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* current = head;
        ListNode* previous=NULL;
        ListNode* nextnode;
        
        while(current != NULL){
            nextnode = current->next;
            
            current->next = previous;
            
            previous = current;
            
            current = nextnode;
            
            
        }
        
        return previous;
        
    }
};