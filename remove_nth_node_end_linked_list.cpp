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
        
        int count = 0;
        int itr = 0;
        ListNode* temp = head;
        ListNode* current = head;
        ListNode* prev = NULL;
        
        while(temp != NULL){
            temp = temp->next;
            count += 1;
        }
        
        int find = count - n;
        if(find == 0){
            return head->next;
        }
        
        while(current != NULL){
            if(itr==find){
                prev->next = current->next;
                break;
            }
            itr++;
            prev = current;
            current = current->next;
        }
        
        return head;
    }
};