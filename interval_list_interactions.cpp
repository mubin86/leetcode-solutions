class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>>result;
        vector<int>tempList;
        if(firstList.size()== 0 || secondList.size()== 0){
            return result;
        }

        for(int i=0; i<firstList.size(); i++){
            for(int j=0; j< secondList.size(); j++){
                if(secondList[j][0] > firstList[i][1] ){
                    continue;
                }
                int lower = max(secondList[j][0], firstList[i][0]);
                int upper = min(secondList[j][1], firstList[i][1]);

                if(lower <= upper){
                    tempList.push_back(lower);
                    tempList.push_back(upper);
                    result.push_back(tempList);
                    tempList.clear();
                }
            }  
        }

        return result;
    }
};