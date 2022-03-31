class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        // position={1,2,2,2,2};
        
        int evn=0 , odd =0 ;
        
        for(int i=0 ; i < position.size() ; i++){
           
            if(position[i]%2 == 0){
                evn++ ; 
            } else{
                odd++ ;  
            }
            
        }
        
        return min(evn,odd) ;
    }
};