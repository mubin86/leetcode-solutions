class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(left == right){
            return head;
        }
        
        stack<ListNode*>st;
        ListNode* root = head;
        ListNode* nextNode = NULL;
      
        ListNode* it = head;
        ListNode* resultHead = head;
        
        int count = 1;
        while(root != NULL){
            
            if(count >= left && count <= right){
                st.push(root);    
            }
            
            root = root->next;
            count++;
            if(count > right){
                nextNode = root;
                break;
            }
        }
        
        int i = 1;
        ListNode* prevNode = NULL;
        
        if(left == 1){
            resultHead = st.top();
                         st.pop();
            prevNode = resultHead;
            i++;
        }

         while(!st.empty()){
            
            if(i >= left && i <= right){
                prevNode->next = st.top();
                                 st.pop();
                prevNode = prevNode->next;
            }else{
                 prevNode = it;
                 it = it->next;
            }
            
            i++;
        }
        
        prevNode->next = nextNode;
        
        return resultHead;
        
    }