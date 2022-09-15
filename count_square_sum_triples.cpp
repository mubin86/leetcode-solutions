class Solution {
public:
    int countTriples(int n) {
        int temp1 = 0;
        int temp2 = 0;
        int count = 0;
        
        for(int i=2; i<=n-2; i++){
            for(int j=i+1; j<=n-1; j++){
                temp1 = pow(i, 2) + pow(j, 2);
                
                for(int k=j+1; k<=n; k++){
                    temp2 = pow(k, 2);
                    
                    if(temp1 < temp2){
                        break;
                    }
                    
                    if(temp1 == temp2){
                        count+=2;
                    }
                    
                }
            }
        }
        
        return count;
    }
};