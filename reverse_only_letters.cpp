class Solution {
public:
    string reverseOnlyLetters(string s) {
        // s="a-bC-dEf-ghIj";
        // s="Test1ng-Leet=code-Q!";
        // s="----abcd";
        // s="a-";
        
        int end = s.length() - 1;
        int low = 0;   
        
        while(low < end){
            
            if(isalpha(s[low])){
               
                bool result = isalpha(s[end]);
                
                while(result != true){
                    end = end - 1;
                    result = isalpha(s[end]);
                   
                }
                
                // cout<<"s low is "<< s[low]<<" "<< "s end is "<< s[end]<<endl; 
                swap(s[low], s[end]);
            
                end = end - 1;

            }
            
            low++;
           
        }
        
        return s;
    }
};