class Solution {
public:
    string DecToBin(int num, int n){
        string result = "";
        for(int i=0; i<n; i++){
            char c;
            if(num & (1<<i)){
                c = '1';
            }else{
                c = '0';
            }
            result += c;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();

        for(int i=0; i<(1<<n); i++){
            string temp = DecToBin(i, n);

            auto it = find(nums.begin(),
                 nums.end(), temp);

            if(it == nums.end()){
                 return temp;;
            }
        }

        return "-1";
    }
};