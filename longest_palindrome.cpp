class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>m;

        for(int i=0; i<s.length(); i++){         
                m.insert({s[i], m[s[i]]++});
        }
        
        int sum = 0;
        bool flag = false;
        unordered_map<char, int>:: iterator itr;
        
        for(itr = m.begin(); itr != m.end(); itr++){
            auto temp = itr->second;
            if(temp >= 2){
                if((temp^1) == temp+1){
                     sum += temp;
                }else{
                    sum += (temp-1);
                    flag=true;
                }  
            }else{
                flag = true;
            }
        }
        
        if(flag){
            sum +=1;
        }
        
        return sum;
    }
};