class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
     
        unordered_map<int, int>m;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        
         unordered_map<int, int>:: iterator it;
        
        for(auto it = m.begin(); it!= m.end(); it++){
            pq.push(make_pair(it->second, it->first));   
        }
        
        int i=0;
        int temp = k;
        while(i< k){
            pair<int, int>p = pq.top();
            
            if(p.first <= temp){
               auto it1 = m.find(p.second);
                m.erase(it1); 
                temp = temp-p.first;
                i = i+ p.first;
            }else{
                k= 0;
            }
            pq.pop();
        }
        
        return m.size();
    }
};