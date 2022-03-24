class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int>m;
        vector<int>result;
        priority_queue<int, vector<int>, greater<int> >pq;
        
        for(int i=0; i< arr1.size(); i++){
            m[arr1[i]]++;
        }
        
        for(int i=0; i < arr2.size(); i++){   
            int temp = m[arr2[i]];
    
            for(int j =0; j< temp; j++){
                result.push_back(arr2[i]);
                m[arr2[i]]--;
            }
        }
        
        unordered_map<int, int>::iterator it;
        
        for(it = m.begin(); it != m.end(); it++){
            if(it->second > 0){
                int temp = it->second;
                while(temp > 0){
                    pq.push(it->first);
                    temp--;
                }
            }
        }
        
        while(!pq.empty()){
            int val = pq.top();
                        pq.pop();
            
            result.push_back(val);
        }
        
        
        return result;
    }
};