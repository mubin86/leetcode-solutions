class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int>m;
        vector<int>C(A.size(), -1);

        for(int i=0; i<A.size(); i++){
            m[A[i]]++;
            int commonNum = 0;
            
            for(int j=i; j>=0; j--){
               if(m.find(B[j]) != m.end()){
                   commonNum++;
               }
            }

            C[i] = commonNum;
        }

        return C;
    }
};