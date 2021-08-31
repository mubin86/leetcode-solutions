class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        map<int, int>m;
        // for(int i=0; i<numbers.size(); i++){
        //     for(int j =i+1; j<numbers.size(); j++){
        //         if(numbers[i] + numbers[j] == target){
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //             return ans;
        //         }
        //     }
        // }
        
        for(auto i=0; i<numbers.size(); i++){
            int temp = target - numbers[i];
            
            if(m.find(temp) == m.end()){
                m.insert({numbers[i], i+1});
            }else{
                // int index1 = m[temp];
                ans.push_back(m[temp]);
                ans.push_back(i+1);
                break;
            }
        }
        
        return ans;
    }
};