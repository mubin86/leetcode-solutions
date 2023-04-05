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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int>nodes;
        ListNode* current = head;
        vector<pair<int, int>>removeIndexes;
        unordered_map<int, bool>mp;
        int tempSum;

        while(current != NULL){
            nodes.push_back(current->val);
            current = current->next;
        }

        for(int i=0; i<nodes.size(); i++){
            mp[i] = true;
        }

        for(int i=0; i<nodes.size(); i++){
            tempSum = 0;
            tempSum += nodes[i];
            if(tempSum == 0){
                mp[i] = false;
                continue;
            }
            for(int j=i+1; j<nodes.size(); j++){
                tempSum += nodes[j];
                if(tempSum == 0){
                    if(removeIndexes.size() > 0){
                        pair<int, int> p = removeIndexes[removeIndexes.size()-1];
                        if(i > p.second){
                            removeIndexes.push_back(make_pair(i, j));
                        }
                    }else{
                        removeIndexes.push_back(make_pair(i, j));
                        
                    }
                    i = j;
                    break;
                }
            }
        }

        for(int i=0; i<removeIndexes.size(); i++){
            pair<int, int> p = removeIndexes[i];
            for(int k=p.first; k<=p.second; k++){
                mp[k] = false;
            }
        }
       
        ListNode* newHead = NULL;
        int k = 0; 
        bool flag = false;
        while(k < nodes.size()){
            if(mp[k]){
                if(!flag){
                     newHead = new ListNode(nodes[k]);
                     flag = true;
                     current = newHead;
                     k++;
                     continue;
                }
                ListNode* node = new ListNode(nodes[k]);
                current->next = node;
                current = node;
            }
            k++;
        }

        return newHead;
    }
};