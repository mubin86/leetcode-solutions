class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string, int>m1;
        unordered_map<string, int>m2;
        int count = 0;
        
        for(int i=0; i<words1.size(); i++){
            m1[words1[i]]++;
        }
        
        for(int i=0; i<words2.size(); i++){
            m2[words2[i]]++;
        }
        
        vector<string>temp;
        
        if(words1.size() > words2.size()){
            temp = words2;
        }else{
            temp = words1;
        }
        
        for(int i=0 ; i<temp.size(); i++){
            
            if(m1[temp[i]] && m2[temp[i]]){
                if(m1[temp[i]] == 1 && m1[temp[i]] == m2[temp[i]]){
                    count++;
                }
            }
            
        }
        
        return count;
    }
};