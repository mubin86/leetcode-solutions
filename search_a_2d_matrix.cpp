class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size()-1;
        int column = matrix[0].size()-1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(matrix[mid][0] <= target && matrix[mid][column] >= target){
                auto it = std::find(matrix[mid].begin(), matrix[mid].end(), target);
                if(it != matrix[mid].end()){
                    return true;
                }
                return false;
            }
            
            if(matrix[mid][0] > target){
                high = mid-1;
            }else{
                low = mid + 1;
            }
        }

        return false;
    }
};