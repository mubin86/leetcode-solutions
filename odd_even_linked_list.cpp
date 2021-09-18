class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        //could be implement using queue approach

        if(!head || !head->next || !head->next->next){
            return head;
        }    
        ListNode* current1 = head;
        ListNode* current2 = head->next;
        
        ListNode* first = head;
        ListNode* second = head->next;
 
        ListNode* sec = second;
        
        while(first != NULL){
            first = first->next;
            
            if(!first || !first->next){
                break;
            }else{
                 first = first->next;
            }
            ListNode* temp = new ListNode(first->val);
            current1->next = temp;
            current1 = temp;          
    
        }
            
        if(!second->next->next){
            current1->next = second;
            second->next = NULL;
            return head;
        }
        
       while(second != NULL){
            second = second->next;
            if(!second || !second->next){
                break;
            }else{
                 second = second->next;
            }

            ListNode* temp = new ListNode(second->val);
            current2->next = temp;
            current2 = temp;    
        }
        
        current1->next = sec;
        return head;
    }
};