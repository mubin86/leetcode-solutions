class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        long long ans=0;
        int x=0;
        unordered_map<int,int>m;

        while(j<n)
        {
            m[nums[j]]++;
            if(m[nums[j]]>=2){
                x += (m[nums[j]]-1);
            }    
         
            while(x>=k){   
                ans += (n-j);
                if(m[nums[i]]>=2){
                    x -= (m[nums[i]]-1);
                }

                m[nums[i]]--;
                if(m[nums[i]]==0){
                    m.erase(nums[i]);
                }

                i++;
            }
            j++;
        }
        return ans;
    }
};