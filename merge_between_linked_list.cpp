class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* temp1 = list1;
        ListNode* temp2 = list1;
        ListNode* start = NULL;
        ListNode* end = NULL;
        
        int count1 = 0;
        int count2 = 0;
        
        while(count1 != a){
            start = temp1;
            temp1 = temp1->next;
            count1++;
        }
        
        while(count2 !=b){   
            temp2 = temp2->next;
            end = temp2->next;
            count2++;
        }
        
        start->next = list2;
        
        while(list2->next != NULL){
            list2 = list2->next;
        }
        
        list2->next = end;
        
        return list1;
    }
};