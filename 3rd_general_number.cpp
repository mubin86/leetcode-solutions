class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int> > s;
        long long int sum = 0;  
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }   
        int temp = 0; 
        set<int, greater<int> >::iterator itr;
        for(itr = s.begin(); itr != s.end(); itr++){
            temp++;
            if(temp == 3){
                return *itr;
            }
        }    
        if(temp < 3){
            itr = s.begin();
            return *itr;
        }  
        return 0;
    }
};