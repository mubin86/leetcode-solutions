class Solution {
public:
    void rotate(vector<int>& v, int k) {
//         // int size = nums.size();
        
//         for(int i = 0; i<k; i++){
//             // int temp = nums[size];
//             // nums.pop_back();
//             // nums.insert(nums.begin(), temp);
            

//              std::rotate(nums.rbegin(), nums.rbegin() + 1, nums.rend());
//         }
        
         int n=v.size();
	//To remove cycle
    k=k%n;
	//to rotate element to right by k
 std::rotate(v.begin(), v.begin()+n-k, v.end());
 
 //to rotate element to left by k
      // std::rotate(v.begin(), v.begin()+k, v.end());
        
    
        
    }
};