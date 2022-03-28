class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int res = 0;
        unordered_map<char, int>m;
        
        for(int i=0; i< text.length(); i++){
                m[text[i]]++;
        }

        int b = m['b'];
        int a = m['a'];
        int l = m['l'];
        int o = m['o'];
        int n = m['n'];
        
        int baMin = min(b, a);
        int banMin = min(baMin, n);
        int olMin = min(o, l);
        
        while(banMin > 0){       
            
            if((banMin * 2) <= olMin){
                return banMin;
            }
            
             banMin--; 
            
        }
        
        return res;
        
    }
};