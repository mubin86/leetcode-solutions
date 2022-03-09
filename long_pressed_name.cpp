class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j = 0; 
        
        for(int i = 0; i <  name.length(); i++){
            
            char current = name[i];
            
            char pattern = typed[j];
            
            if(current != pattern){
                return false;
            }
            
            char currentNext= name[i+1];
            
            if(current != currentNext){
                char patternNext = typed[j+1];

                while(pattern == patternNext){
                    j++;
                    pattern = typed[j];
                    patternNext = typed[j+1];
                }
 
            }
            j++;
           
            
        }
        
        
        char last = name[name.length()-1];
        
        while(j < typed.size()){
            if(typed[j] != last){
                return false;
            }
            j++;
        }
        
        
        return true;
        
    }
};