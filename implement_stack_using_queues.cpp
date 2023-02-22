class MyStack {
public:
    vector<int>st;
    MyStack() {
        
    }
    
    void push(int x) {
        st.push_back(x);
    }
    
    int pop() {
        int lastElm = st[st.size()-1];
        st.pop_back();
        return lastElm;
    }
    
    int top() {
        return st[st.size()-1];
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */