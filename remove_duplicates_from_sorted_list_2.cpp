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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int>m;
        ListNode* temp = head;

        while(temp != NULL){
            m[temp->val]++;
            temp = temp->next;
        }

        auto it = m.begin();
        bool flag = false;
        ListNode* newHead = NULL;
        ListNode* current = NULL;

        while(it != m.end()){
            if(it->second == 1){
                ListNode* node = new ListNode(it->first);
                if(!flag){
                    newHead = node;
                    current = node;
                    flag = true;
                }else{
                    current->next = node;
                    current = node;
                }
            }
            it++;
        }
        
        return newHead;
    }
};