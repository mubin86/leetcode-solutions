class MyQueue {
public:
    /** Initialize your data structure here. */
     stack<int>s1, s2;
    int peekel;
    
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.empty()){
            peekel = x;
        }
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
         int top;
        while(!s1.empty()){
            
            top = s1.top();
                      s1.pop();
            
            if(!s1.empty()){
            
                s2.push(top);
            }else{
                if(!s2.empty()){
                     peekel =  s2.top();
                }
                
                while(!s2.empty()){
                    int s2top = s2.top();
                                s2.pop();
                    s1.push(s2top);
                }
                break;
            }
        }
        
        return top;
        
    }
    
    /** Get the front element. */
    int peek() {  
            return peekel;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */