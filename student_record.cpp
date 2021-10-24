class Solution {
public:
    bool checkRecord(string s) {
        int tempa = 0;
        int templ = 0;
        
        for(int i=0; i < s.length(); i++){
            switch(s[i]) {
                case 'A':
                    if(templ < 3){
                        templ=0;
                    }
                    
                    tempa++;
                break;
                    
                case 'L':
                    templ++;
                break;
                    
                case 'P':
                     if(templ < 3){
                        templ=0;
                    }
                break;
                default:
                break;
            }
        }
        if(tempa <2 && templ <3){
            return true;
        }
        return false;
    }
};