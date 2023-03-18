class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>triangle;
        vector<int>eachRow;
        eachRow.push_back(1);
        triangle.push_back(eachRow);
        eachRow.push_back(1);
        triangle.push_back(eachRow);
        eachRow.clear();


        for(int i=2; i<=rowIndex; i++){
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    eachRow.push_back(1);
                }else{
                    eachRow.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
                } 
            }

            triangle.push_back(eachRow);
            eachRow.clear();
        }
        
        return triangle[rowIndex];
    }
};