class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        vector<int>list;
        
         while(head != NULL){
             list.push_back(head->val);
             head = head->next;
         }
    
        sort(list.begin(), list.end());
        
        ListNode *node = new ListNode(list[0]);
        
        ListNode *start = node;
        
        for(int i = 1; i<list.size(); i++){
            node->next = new ListNode(list[i]);
            node = node->next;
            
        }
        
        return start;
    }
};