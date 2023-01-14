class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* result = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode *temp = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
          
            if(slow == fast){
                while( temp != slow){
                    temp = temp->next;
                    slow = slow->next;
                }
                return temp;
            }
        }

        return NULL;
    }
};