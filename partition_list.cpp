/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
    
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* start = NULL;
        ListNode* end = NULL;
        queue<int>q;
        bool flag = false;
        
        while(temp != NULL){
            
            if(temp->val >=x && !flag){
                start = prev;
                end = temp;
                flag = true;
            }else if(temp->val < x && flag){
                prev->next = temp->next;
                q.push(temp->val);
                temp = prev;
            }
            
            prev = temp;
            temp = temp->next;
        }
        
        bool startFlag = false;
        ListNode* result = NULL;
        
        while(!q.empty()){
            
            int val = q.front();
                        q.pop();
            
            ListNode* node = new ListNode(val);
            
            if(start == NULL){
                startFlag = true;
                result = node;
                start = node;
            }else{
                start->next = node;
                start = start->next;
            } 
        }
        
        if(start != NULL){
            start->next = end;
        }  
        
        return !startFlag ? head : result;
    }
};