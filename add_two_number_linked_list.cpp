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
    //         stack<int>st1;
    //         stack<int>st2;
    //         ListNode *head = new ListNode();
    //         // ListNode *start = new ListNode();
    //         // start = head;
    //         // or,
    //         // ListNode *start = head;
            
    //         ListNode *previous = NULL;
    //         previous= new ListNode();
    //         // previous=NULL;
    //         // ListNode *resultHead = new ListNode();
    //         ListNode *resultHead = previous;
            
            
    //         int m,n,sum;
    //         bool flag=false;

    //         while(l1 !=NULL){
    //             cout<<"l1 value is "<<l1->val;
    //             st1.push(l1->val);
    //             l1= l1->next;
    //         }
    //         while(l2 !=NULL){
    //             st2.push(l2->val);
    //             l2=l2->next;
            
    //         }
    //         // while(l3 !=NULL){
    //         //     cout<<"l3 val is "<<l3->val<<" ";
    //         //     l3= l3->next;
    //         // }
    //         // while(l4 !=NULL){
    //         //     cout<<"l4 val is "<<l4->val<<" ";
    //         //     l4= l4->next;
    //         // }
            
    //         while(!st1.empty() || !st2.empty()){
    //             m = st1.top();
    //             n= st2.top();
    //             sum = m+n;
    //             if(flag == true){
    //                 sum +=1;
    //                 flag=false;          
    //             }
    //             if(sum >= 10){
    //                 sum = sum - 10;
    //                 flag = true;
    //             }
                
    //             cout<<"sum is "<<sum<<endl;
                
    //             // head->val=sum;
    //              // cout<<"prev called "<<endl;
                
    //             // if(previous==NULL){
    //             //     cout<<"prev null called "<<endl;
    //             //     resultHead=head;
    //             //     cout<<"resultHead is "<<resultHead->val<<endl;
    //             // }
    //             //  if(previous != NULL){
    //             //       cout<<"prev not null called "<<endl;
    //             //     previous->next=head;
    //             // }
    //             // previous=head;
                
    //             //***worked***********//
    //             ListNode *newnode= new ListNode(sum);
    //             previous->next = newnode;
    //             //previous=newnode;
    //             //or 
    //             previous= previous->next;
                
    //             st1.pop();
    //             st2.pop();
                
    //         }
        
    //           return {resultHead->next};
            
            
            //*********fresh code starts here
            
            ListNode *dummy = new ListNode();
            ListNode *temp = dummy;
            int carry=0;
            while(l1!=NULL || l2!=NULL || carry){
                int sum=0;
                
                if(l1!=NULL){
                    sum = sum + l1->val;
                    l1 = l1->next;
                }
                
                if(l2!=NULL){
                    sum = sum + l2->val;
                    l2 = l2->next;
                }
                
                sum = sum + carry;
                carry = sum/10;
                
                ListNode *node = new ListNode(sum%10);
                temp->next = node;
                temp = temp->next;
                
            }
            return dummy->next;
            
        
        }
    };