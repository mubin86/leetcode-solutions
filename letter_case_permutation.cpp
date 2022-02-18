class Solution {
public:
 
    void permutation( string input, string output, vector<string>&ans ){
        
        if(input.length() == 0){
            ans.push_back(output);
            return;
        }
        
        if(isalpha(input[0])){
            
            string output1 = output;
            string output2 = output;
            
            output1.push_back(tolower(input[0])) ;
            output2.push_back(toupper(input[0])) ;
            
            input.erase(input.begin() + 0);
            
            permutation(input, output1, ans);
            permutation(input, output2, ans);
        }
        else{ 
            string output1 = output;
            output1.push_back(input[0]) ;
            input.erase(input.begin() + 0);
            
            permutation(input, output1, ans);    
        } 
        
    }
    
    
    vector<string> letterCasePermutation(string s) {
       
        string input = s;
        string output = "";
        
        vector<string>ans;
        
        permutation(input, output, ans);
        
        return ans;
    }
};