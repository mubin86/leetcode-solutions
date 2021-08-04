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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        ListNode* previous = NULL;
        ListNode* temp = head;
        int count = 0;
        int total= 0;
        
        
        while(temp != NULL){
            temp =temp->next;
            total += 1; 
        }
        
        while(count <= total -n){     
            if(count == (total -n)){
                 if((total -n) == 0){
                   return head->next;
                }
                previous->next = current->next;
                delete current;
               break;
            }
            previous = current;
            current = current->next;
            count ++;
            
        }
        return head;
    }
};