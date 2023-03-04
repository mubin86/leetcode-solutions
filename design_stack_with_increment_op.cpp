class CustomStack {
public:
    int mSize;
    vector<int>stack;
    CustomStack(int maxSize) {
        mSize = maxSize;
    }
    
    void push(int x) {
        if(stack.size() < mSize){
            stack.push_back(x);
        }
    }
    
    int pop() {
        if(stack.size() > 0){
             int elm = stack.back();
             stack.pop_back();
             return elm;
        }
       return -1;
    }
    
    void increment(int k, int val) {
        int size = stack.size();
        int n = min(k, size);
       
        for(int i=0; i<n; i++){
            stack[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */