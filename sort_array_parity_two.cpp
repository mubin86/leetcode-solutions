class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
           vector<int> result(nums.size(), 0);
//         queue<int>evenq;
//         queue<int>oddq;

        
//         for(int i=0; i< nums.size(); i++){
//             if(nums[i] % 2 == 0){
//                 evenq.push(nums[i]);
//             }else{
//                 oddq.push(nums[i]);
//             }
            
//         }
        
//         while(!evenq.empty() ){
            
//             int even = evenq.front();
//                         evenq.pop();
//             int odd = oddq.front();
//                         oddq.pop();
            
//             result.push_back(even);
//             result.push_back(odd);
//         }
        
        
        //**** 2nd approach
        int evenflag = 0;
        int oddflag = 1;
        
        for(int i=0; i < nums.size(); i++){
            
            if(nums[i] % 2 == 0)  {
                result[evenflag] = nums[i];
                evenflag += 2;
            }else{
                result[oddflag] = nums[i];
                oddflag += 2;
            }
        }
        
        return result;
        
    }
};