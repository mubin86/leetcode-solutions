class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {    
        
        if(bills[0] > 5){
            return false;
        }
        
        unordered_map<int, int> m;

        for(int i=0; i< bills.size(); i++){
            
            if(bills[i] == 5){
                m[bills[i]]++;
            }
           
            else if(bills[i] == 10){
                m[bills[i]]++;
                    
                if( m.find(5) == m.end() ){

                    return false; 
                }else{

                    m[5]--;
                    
                    if(m[5] == 0){
                        m.erase(5);
                    }
                }
            
            }
            
            else{             
                if(m.find(10) == m.end()){
                    
                    int temp5 = m[5];
                    
                    if(temp5 < 3){
                        return false;
                    }else{
                        m[5] = m[5]-3;

                        if(m[5] == 0){
                            m.erase(5);
                        }
                    }
                }else{
                    
                    m[10]--;
                    
                    if(m[10] == 0){
                        m.erase(10);
                    }
                    
                    if(m.find(5) == m.end()){
                        return false;
                    }else{
                        
                        m[5]--;
                        
                        if(m[5] == 0){
                            m.erase(5);
                        }
                    }
                }
                
            }
        
        }
        
        return true;
        
        
    }
};