class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int count =0;
        int result = 0;
        
        for(int i=0; i<arr.size(); i++){
            sum =0;
            count = 0;
            for(int j=i; j<arr.size(); j++){
                sum += arr[j];
                count += 1;
                
                if(count % 2 !=0){
                    result += sum;
                }
            
            }  
        }
        
        return result;
    }
};