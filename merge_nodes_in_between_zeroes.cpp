class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        int tempSum = 0;
        vector<int>merge;
        
        while(temp != NULL){
            if(temp->val == 0){
                if(tempSum > 0){
                    merge.push_back(tempSum);
                    tempSum = 0;
                }
            }else{
                tempSum += temp->val;
            }
            
            temp = temp->next;
        }
        
        bool flag = false;
        ListNode* start = NULL;
        ListNode* prev;
        
        for(int i=0; i<merge.size(); i++){
            ListNode* node = new ListNode(merge[i]);
            
            if(!flag){
                start = node;
                prev = node;
                flag = true;
            }else{
                prev->next = node;
                prev = node;
            }
        }
        
        prev->next = NULL;
        
        return start;
        
    }
};