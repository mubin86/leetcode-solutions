class LRUCache {
public:
    int capacity = 0;
    int priority = 1;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    unordered_map<int, int> mp;
    unordered_map<int, int> usageTracking;
    
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()) {
            priority++;
            usageTracking[key] = priority;
            pq.push({priority, key});
            return mp[key];
        } 
        return -1;
    }
    
    void put(int key, int value) {
        priority++;
        mp[key] = value;
        usageTracking[key] = priority;
        pq.push({priority, key});

        while(mp.size() > capacity && !pq.empty()) {
            pair<int, int> temp = pq.top();

            if(usageTracking[temp.second] == temp.first) {
                mp.erase(temp.second);
                usageTracking.erase(temp.second);
            } 
            pq.pop();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */