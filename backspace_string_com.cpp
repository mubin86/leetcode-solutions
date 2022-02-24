class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // s="ab##";
        // t="c#d#";
        
//         int slength = s.length();
//         int tlength = t.length();
        
//         int i = 0;
//         int j = 0;
        
//         while( i < slength){
//             if(s[i] == '#'){
//                 s.erase(i-1, 2);
//                 slength= s.length();
//                 i= i-2;
//             }else{
//                  i++;
//             }
           
//         }
        
//          while( j < tlength){
//             if(t[i] == '#'){
//                 t.erase(j-1, 2);
//                 tlength= t.length();
//                 j= j-2;
//             }else{
//                  j++;
//             }
           
//         }
           
    

        
       // s= "xywrrmp";
       //  t="xywrrmu#p";
        
        for(int i=0; i < s.length(); i++){
            
            if(s[i] == '#'){
                s[i] = '1';
                
                int temp = i-1;
                
                while(temp>= 0){
                    if(s[temp] != '1'){
                        s[temp] = '1';
                        break;
                    }
                    
                    temp--;
                }
            }
        }
        
          for(int j=0; j < t.length(); j++){
            
            if(t[j] == '#'){
                t[j] = '1';
                
                int temp = j-1;
                
                while(temp>= 0){
                    if(t[temp] != '1'){
                        t[temp] = '1';
                        break;
                    }
                    
                    temp--;
                }
            }
        }
        
         s.erase(remove( s.begin(), s.end(), '1'), s.end());
        
         t.erase(remove( t.begin(), t.end(), '1'), t.end());
        
        cout<<"s is "<<s<<endl;
        cout<<"t s "<<t<<endl;
            
        if(s==t){
            return true;
        }
        
        return false;
    }
};