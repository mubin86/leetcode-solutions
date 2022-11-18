class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>result;
        priority_queue<int>oddP;
        priority_queue<int, vector<int>, greater<int>>evenP;
        
        bool evenFlag = true;
        
        for(int i=0; i <nums.size(); i++){
            if(evenFlag){
                evenP.push(nums[i]);
                evenFlag = false;
            }else{
                oddP.push(nums[i]);
                evenFlag = true;
            }    
        }
        
        while(!evenP.empty() && !oddP.empty()){
            
            int n1 = evenP.top();
                     evenP.pop();
            
            int n2 = oddP.top();
                     oddP.pop();
            
            result.push_back(n1);
            result.push_back(n2);
        }
        
        if(!evenP.empty()){
           int temp = evenP.top();
                      evenP.pop();
            result.push_back(temp);
        }
        
        return result;
    }
};