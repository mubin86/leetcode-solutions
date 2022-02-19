class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        vector<int>result;
        
        for(int i=0 ; i< s.length(); i++){      
            string strr = s.substr(i);
            string str = s.substr(0, i);
        
            auto find1 = strr.find(c);
            auto find2 = str.find(c);
            auto prev = find2;
            
            if(find2 == string::npos){
                find2 = INT_MAX;
            }
            else{
                 while(find2 != string::npos){
                    prev = find2;
                    find2 = str.find(c, find2+1);
                }
              
                find2 = str.length()-prev;  
            }
 
            int temp = min(find1, find2);
            
            result.push_back(temp);   
        }
        
        return result;
    }
};