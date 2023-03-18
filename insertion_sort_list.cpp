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
    ListNode* insertionSortList(ListNode* head) {
        multimap<int, int>m;
        ListNode* temp = head;

        while(temp != NULL){
            m.insert({temp->val, temp->val});
            temp = temp->next;
        }

        auto it = m.begin();
        ListNode* newHead = new ListNode(it->first);
        ListNode* prev = newHead;
        it++;

        while(it != m.end()){
            ListNode* current = new ListNode(it->first);
            prev->next = current;
            prev = current;
            it++;
        }

        return newHead;

    }
};