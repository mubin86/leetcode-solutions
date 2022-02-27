class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
//         ListNode* temp = head;
//         int count = 0;
        
//         int mid = 0;
//         int i = 0;
        
//         while(temp != NULL){
//             temp = temp->next;
//             count++;
//         }
  
//         mid = count / 2;
        
//         while( i < mid){
//             head = head->next;
//             i++;
//         }
        
//         return head;
        
        
        // ** USING FLOYD CYCLE FINDING ALGO
        
        ListNode *slow = head;
        ListNode *fast = head;
        
         while(fast!=NULL && fast->next!=NULL){
                slow = slow->next;
                fast = fast->next->next;
           }
        return slow;
        
    }
};