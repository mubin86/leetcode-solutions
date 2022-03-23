class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        expected = heights;
        
        sort(expected.begin(), expected.end());
        int count = 0;
        
        for(int i = 0; i<heights.size(); i++){
            if(heights[i] != expected[i]){
                
                count += 1;
            }
        }
        
        return count;
    }
};