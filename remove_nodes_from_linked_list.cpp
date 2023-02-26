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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int>nodesVal;
        nodesVal.push_back(temp->val);
        temp = temp->next;

        while(temp != NULL){
            int lastVal = nodesVal.back();

            if(temp->val <= lastVal){
                nodesVal.push_back(temp->val);
            }else{
                while(lastVal < temp->val){
                    nodesVal.pop_back();
                    if(nodesVal.size() == 0){
                        break;
                    }else{
                        lastVal = nodesVal.back();
                    }
                }
                nodesVal.push_back(temp->val);
            }

            temp = temp->next;
        }

        ListNode* newHead = new ListNode(nodesVal[0]);
        ListNode* current = newHead;
        int i = 1;

        while(i < nodesVal.size()){
            ListNode* node = new ListNode(nodesVal[i]);
            current->next = node;
            current = node;
            i++;
        }

        current->next = NULL;

        return newHead;

    }
};