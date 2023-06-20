class FrontMiddleBackQueue {
public:
    vector<int>queue;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        queue.insert(queue.begin(), val);
    }
    
    void pushMiddle(int val) {
        queue.insert(queue.begin()+queue.size()/2, val);
    }
    
    void pushBack(int val) {
        queue.push_back(val);
    }
    
    int popFront() {
        int val = -1;
        if(queue.size() > 0){
            val = queue.front();
            queue.erase(queue.begin());
        }
        return val;
    }
    
    int popMiddle() {
        int middle = queue.size()/2;
        int val = -1;
        if(queue.size()%2 == 0){
            middle -= 1;
        }

        if(middle >= 0 && middle<queue.size()){
            val = queue[middle];
            queue.erase(queue.begin()+middle);
        }
        return val;
    }
    
    int popBack() {
        int val = -1;
        if(queue.size() > 0){
            val = queue.back();
            queue.pop_back();
        }
        return val;
       
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */