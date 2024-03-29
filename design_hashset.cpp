class MyHashSet {
public:
    unordered_map<int, int>m;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(m.find(key) == m.end()){
            m.insert({key, key});
        }
    }
    
    void remove(int key) {
        m.erase(key);
    }
    
    bool contains(int key) {
       return m.find(key) != m.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */