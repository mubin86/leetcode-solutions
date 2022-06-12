class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
       
        ListNode* temp = head;
        ListNode* start = head;
        ListNode* root = head;
       
        if(head->next == NULL){
            return head;
        }
       
        int count = 0;
        int firstValue;
        int secondValue;
       
        if(head->next->next == NULL){
            firstValue = head->val;
            secondValue = head->next->val;
           
            head->val = secondValue;
            head->next->val = firstValue;
            return head;
        }
       
        int tmp = 1;
       
        int lastIndex;
        ListNode* prev;
       
        while(temp != NULL){
            prev = temp;
            temp = temp->next;
            count++;
        }
    
        if(count == k){
            firstValue = head->val;
            head->val = prev->val;
            prev->val = firstValue;
            return head;
        }
        lastIndex = (count - k) + 1;
        int j = 1;
       
        while(start != NULL){
            if(tmp == k){
                firstValue = start->val;
            }
            start = start->next;
            tmp++;
            if(tmp == lastIndex){
                secondValue = start->val;
            }
        }
       
        while(root != NULL){
            if(j == k){
                root->val = secondValue;
            }
            root=root->next;
            j++;
           
            if(j == lastIndex){
                root->val = firstValue;
            }
        }
   
        return head;
   
    }
};