class Solution {
public:
    void reorderList(ListNode* head) {
        deque<int> dq;
        ListNode* current = head;
        
        while(current != NULL){
            dq.push_back(current->val);
            current = current->next;
        }
        
        int frontVal;
        int rearVal;
        ListNode* frontNode = NULL;
        ListNode* rearNode = NULL;
        bool flag = false;
        int i = 0;
        
        while(!dq.empty()){
            frontVal = dq.front();
            dq.pop_front();
            
            if(i == 0){
                frontNode = head;
            }else{
                frontNode = new ListNode(frontVal);
            }
            
            if(rearNode != NULL){
                rearNode->next = frontNode;
            }
            
            if(!dq.empty()){
                rearVal = dq.back();
                dq.pop_back();
                rearNode = new ListNode(rearVal);
                frontNode->next = rearNode;
            }else{
                frontNode->next = NULL;
                flag = true;
            }    
            
            i++;
        }
        
        if(!flag){
            rearNode->next = NULL;
        }
        
    }
};