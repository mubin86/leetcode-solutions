class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool flag = false;
        int count = 0;
        string result;
        
        
        if(strs.size() == 1){
            return strs[0];
        }
        
        for(int i=0; i< strs[0].length(); i++){
            
            for(int j= 0; j< strs.size() - 1; j++){
                string temp1 = strs[j];
                string temp2 = strs[j+1];
            
                if(temp1[i] == temp2[i]){
                    flag = true;
                    continue;
                }else{
                    flag = false;
                    break;
                }
        
            }
            
            if(flag == true){
                count++;
            }else{
                break;
            }
            
        }
        
        result = strs[0].substr(0, count);
        
        return result;
    }
};