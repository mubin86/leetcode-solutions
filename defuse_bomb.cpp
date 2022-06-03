class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
      
        vector<int>result;
        if(k==0){
           fill(code.begin(), code.end(), 0); 
            return code;
        }
        
        if(k > 0){
            for(int i=0; i<code.size(); i++){
                int temp = 0;
                for(int j=i+1; j<= i+k; j++){
                    
                    int itr = j;
                    if(itr >= code.size()){
                        itr -= code.size();
                    }
                    temp += code[itr];          
                }
                
                result.push_back(temp);
            }
        }else{
            k = -k;
            for(int i=code.size()-1; i>=0; i--){
                
                int it = i-1;
                if(it < 0){
                    it += code.size();
                }
                int j =0;
                int temp =0;
                
                while( j < k){
                    temp += code[it];
                    j++;
                    it--;
                    if(it <0){
                        it += code.size();
                    }
                }
                
                result.insert(result.begin(), temp);
            }
        }
        
        return result;
    }
};