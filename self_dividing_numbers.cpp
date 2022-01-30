class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        
        for(int i=left; i<= right; i++){
            
            int num = i;
            int temp = i;
            bool flag = true;
            
            while(temp != 0){
                int digit = temp % 10;
                
                if(digit == 0){
                    flag = false;   
                    break;
                }
                if(num % digit != 0){
                    flag = false;
                    break;
                }

                temp = temp / 10;    
            }
            
            if(flag){
                result.push_back(i);
            }
        }
        
        return result;
        
    }
};