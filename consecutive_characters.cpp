class Solution {
public:
    int maxPower(string s) {
      
        int count = 1;
        int maxCount = count;
        
        for(int i =0; i<s.length()-1; i++){
            if(s[i] == s[i+1]){
                count += 1;
                maxCount = max(maxCount, count);
            }else{
                count = 1; 
            }
            
        }
        
        return maxCount;
    }
};