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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* temp = head;
        
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                ListNode* newnode = new ListNode(l1->val);
                temp->next = newnode;
                temp = newnode; //***or, temp = temp->next;
                l1 = l1->next;
            }else{
                ListNode* newnode = new ListNode(l2->val);
                temp->next = newnode;
                temp = newnode; //***or, temp = temp->next; 
                l2 = l2->next;
            }
        }
        
        if(l1 != NULL){
            temp->next = l1;
        }
        else{
            temp->next = l2;
        }
        
        return head->next;
    }
};