class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        
        for(int i=0; i<logs.size(); i++){
            if(logs[i] == "./"){
                continue;
            }else if(logs[i] == "../"){
                if(count > 0){
                   count--; 
                }
            }else{
                count++;
            }
        }
        
        return count < 0 ? 0 : count;
    }
};