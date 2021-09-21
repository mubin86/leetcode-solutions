class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
//         multiset<int>ms;
        
//         for(int i = 0; i<matrix.size(); i++){
//             for(int j = 0; j < matrix[i].size(); j++){
//                 ms.insert(matrix[i][j]);
//             }
//         }
    
//         int count = 1;            
//         for (auto it = ms.begin(); it != ms.end(); it++){
//             if(count == k){
//                 return *it;
//             }

//             count++;
        // }
        
        // return 0;
       
    //***another way//********    
    vector<int> sorted;
    for(int ii = 0; ii < matrix.size(); ii++)
    {
        for(int jj = 0; jj < matrix[0].size(); jj++)
        {
            sorted.push_back(matrix[ii][jj]);
        }
    }
    
    // sort vector
    sort(sorted.begin(), sorted.end());                  
    return sorted[k-1];
        
        
    }
};