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
    ListNode* swapPairs(ListNode* head) {
        //***My submission-Run time 0ms, faster than 100% submissions
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* startnode = head->next;
        // ListNode* startnode = NULL;
        ListNode* secondnext=NULL;
        ListNode* temp=NULL;
        ListNode* prev = NULL;
        int i = 0;    
        while(head != NULL){
            if(head->next == NULL){
                prev->next = head;
                head->next =NULL;
                break;
            }
            temp = head->next;
            secondnext = head->next->next;
            
            temp->next = head;
            head->next = NULL;    
            // if(i == 0){
            //     startnode = temp;
            // }   
            if(i != 0){
                prev->next = temp;
            }
            prev = head;
            head = secondnext;
            i++;
        }
        
        return startnode;
        
        
        //****alternative solution by creating node of linked list***/////
        
//         ListNode* temp = head;
//         if(temp==nullptr) {
//             return head; 
//         }
            
//         while(temp->next != nullptr){

//             ListNode* t= new ListNode();
//            t->val = temp->val;
//            t->next = temp->next->next;
//            ListNode* p = temp;
//            p->val = temp->next->val; 
//            p->next = t; 
            
//            if(temp->next->next==nullptr){
//                break;
//            }
//            temp = temp->next->next;
//         }
//         return head;
    }
};