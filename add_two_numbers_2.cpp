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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st1;
        stack<int>st2;
        vector<int>newNum;

        while(l1 != NULL){
            st1.push(l1->val);
            l1 = l1->next;
        }
        while(l2 != NULL){
            st2.push(l2->val);
            l2 = l2->next;
        }

        bool carry = false;
        while(!st1.empty() && !st2.empty()){
            int n1 = st1.top();
                     st1.pop();
            int n2 = st2.top();
                     st2.pop();
            int num = n1 + n2;

            if(carry){
                num += 1;
            }
            if(num >= 10){
                newNum.insert(newNum.begin(), num%10);
                carry = true;
            }else{
                if(num >= 10){
                    carry = true;
                    newNum.insert(newNum.begin(), num%10);
                }else{
                    carry = false;
                    newNum.insert(newNum.begin(), num);
                }                
            }
        }

        while(!st1.empty()){
              int n1 = st1.top();
                       st1.pop();
              if(carry){
                  n1 += 1;
              }

            if(n1 >= 10){
                carry = true;
                newNum.insert(newNum.begin(), n1%10);
            }else{
                carry = false;
                newNum.insert(newNum.begin(), n1);
            }   
        }

        while(!st2.empty()){
              int n2 = st2.top();
                       st2.pop();
              if(carry){
                  n2 += 1;
              }

            if(n2 >= 10){
                carry = true;
                newNum.insert(newNum.begin(), n2%10);
            }else{
                carry = false;
                newNum.insert(newNum.begin(), n2);
            }   
        }

        if(st1.empty() && st2.empty() && carry){
            newNum.insert(newNum.begin(), 1);
            carry = false;
        }

        int i = 0;
        if(newNum.size() > 0){
            ListNode* head = new ListNode(newNum[i]);
            ListNode* current = head;
            i++;

            while(i < newNum.size()){
                ListNode* temp = new ListNode(newNum[i]);
                current->next = temp;
                current = temp;
                i++;
            }

            current->next = NULL;

            return head;
        }

        return NULL;
    }
};