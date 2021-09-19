class Solution {
public:
    int maxProduct(vector<string>& words) {
        long long int sum=0;
        
        for(int i =0; i<words.size()-1; i++){
            for(int j=i+1; j<words.size(); j++){
                bool flag = true;
                
                for(int k = 0; k< words[j].length(); k++){
                    string basestr = words[i];
                    string str = words[j];
                 
                    if(basestr.find(str[k]) != std::string::npos){
                        flag =false;
                        break;
                    }
                }
                
                if(flag == true){
                    int temp = words[i].length()*words[j].length();
                        if(temp > sum){
                            sum = temp;
                        }
                }
                
            }
        }
        
        return sum;
    }
};