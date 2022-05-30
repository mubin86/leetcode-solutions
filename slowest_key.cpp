class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        int prev = 0;
        int maxVal = 0;
        int resultIndex = 0;
        
        for(int i=0; i< releaseTimes.size(); i++){
            int result = releaseTimes[i] - prev;
            
            if(result > maxVal){
                maxVal = result;
                resultIndex = i;
            }else if(result == maxVal){
                if(keysPressed[i] > keysPressed[resultIndex]){
                    resultIndex = i;
                }
            }
          
            prev = releaseTimes[i];
        }
        
        
        return keysPressed[resultIndex];
    }
};