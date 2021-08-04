class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // if(s.length() == 0){
        //     return 1;
        // }
        int count=0;
        int max=0;

        unordered_set<char>stringset;
        
        for(int j=0;j<s.length(); j++){
            //stringset needs to clear here every time**********
            stringset.clear();
            count=0;
        for(int i=j; i<s.length(); i++){
            
            if(stringset.find(s[i]) == stringset.end()){
                //means not found
                stringset.insert(s[i]);
                 count++;
                if(count> max){
                    max=count;
                }
            }else{
                // if(count> max){
                //     max=count;
                // }
                // count=1;
                break;
            }         
        }   
        
        }
            return max;
    }
};