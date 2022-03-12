class Solution {
public:
    bool validTriangle(int a, int b, int c){
        return b+c > a;
    }
    
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(), nums.end(), greater<int>());
     
        
        for(int i=0; i <= nums.size()-3; i++){

            int x = nums[i];
            int y = nums[i+1];
            int z = nums[i+2];
            
            if(validTriangle(x, y, z)){
                return x+y+z;
            }
        }
        
        return 0;
          
    }
};