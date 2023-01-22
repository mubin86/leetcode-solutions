class Solution {
public:
    vector<vector<int>>result;

    void combinations(int n, int k, vector<int>&temp, int count, int startIndex){
        if(count == k){
            result.push_back(temp);
            return;
        }
        
        for(int i=startIndex; i<=n; i++){
            temp.push_back(i);
            combinations(n, k, temp, count+1, i+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        combinations(n, k, temp, 0, 1);
        return result;
    }
};