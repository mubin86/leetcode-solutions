class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>temp;
        
        while(head != NULL){
            temp.push_back(head->val);
            head = head->next;
        }
        
        int result = INT_MIN;
        
        for(int i=0; i<temp.size()/2; i++){
            int val = temp[i] + temp[temp.size()-1-i];
            result = max(result, val);
        }
        
        return result;
    }
};