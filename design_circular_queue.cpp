class MyCircularQueue {
public:
    int queueSize;
    vector<int>queue; 
    MyCircularQueue(int k) {
      queueSize = k;
    }
    
    bool enQueue(int value) {
        if(queue.size() < queueSize){
            queue.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(queue.size() > 0){
            queue.erase(queue.begin());
            return true;
        }
        
        return false;

    }
    
    int Front() {
        if(queue.size() > 0){
            return queue[0];
        }
        return -1;
    }
    
    int Rear() {
         if(queue.size() > 0){
            return queue[queue.size()-1];
        }
        return -1;
    }
    
    bool isEmpty() {
        return queue.size() == 0;
    }
    
    bool isFull() {
        return queue.size() == queueSize;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */