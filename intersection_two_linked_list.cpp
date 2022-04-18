class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA== NULL || headB ==NULL){
            return NULL;
        }
        
        ListNode* tempa = headA;
        ListNode* tempb = headB;
        
        int counta = 0;
        int countb = 0;
        
        while(tempa != NULL || tempb != NULL){
            if(tempa != NULL){
                counta++;
                tempa= tempa->next;
            }
            if(tempb != NULL){
                countb++;
                tempb = tempb->next;
            }
        }
        
        int diff = abs(counta-countb);
            
        ListNode* temp1 = NULL;
        ListNode* temp2 = NULL;
        
        if(counta > countb){
            temp1 = headA;
            temp2 = headB;
        }else{
            temp1 = headB;
            temp2 = headA;
        }
        
        int i = 0;
        while( i < diff){
            temp1 = temp1->next;
            i++;
        }
        
        while(temp1 !=  temp2 ){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return temp1;
        
    }
};