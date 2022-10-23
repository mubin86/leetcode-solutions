class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* start = head;
        ListNode* prev = NULL;
        int count = 0;
        
        while(temp != NULL){
            count++;    
            temp = temp->next;
        }
        
        int target;
        
        target = count / 2;
        
        int i = 0;
        
        while(1){
            if(i == target){
                prev->next = start->next;
                break;
            }
            prev = start;
            start = start->next;
            i++;
        }
        
        return head;
        
    }
};