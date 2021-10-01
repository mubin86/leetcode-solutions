class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
//         multiset<char>ms;
//         multiset<char>ps;
        vector<int>ans;


        //first approach        
//         int len = p.length();
       
//         for(int i = 0; i<len; i++){
//             ps.insert(p[i]);
            
//         }

        
//         if(ms == ps){      
//             ans.push_back(0);
//         }
      
     
//         for(int i =1; i <= s.length() - p.length(); i++){
//                 ms.erase(ms.find(s[i-1]));
//                 ms.insert(ms.end(), s[len++]);
            
//                     if(ps == ms){      
//                         ans.push_back(i);
//                     }
//         }
        
        
        //second approach
//         int i = 0, j=0;
        
//         while(j < s.size()){
            
//             ms.insert(s[j]);
            
//             if((j-i+1) < len){
//                 j++;
//             }else if(j-i+1 == len ){
//                 if(ms == ps){
//                     ans.push_back(i);
//                 }
//                 ms.erase(ms.find(s[i]));
//                 i++;
//                 j++;
//             }else{
//                 cout<<"not matched";
//             }
          
//         }
        if(s.length() < p.length()){
            return ans;
        }
       
        if(s.length() == p.length()){
            sort(s.begin(), s.end());
            sort(p.begin(), p.end());
            if(s==p){
                ans.push_back(0);
                return ans;
            }
            
        }
        
        
        map<char, int>m;
        
        for(int i =0; i<p.length(); i++){
            m[p[i]]++;
        }
        int count = m.size();
        
        
        int i = 0, j = 0;
        
        while(j < s.length()){
            
            if(m.find(s[j]) != m.end()){
                m[s[j]]--;
                if(m[s[j]] == 0){
                    count--;
                }
            }
            
            if((j-i+1) < p.length()){
                j++;
            }else if((j-i+1) == p.length()){
                if(count == 0){
                    cout<<"i is "<<i;
                    ans.push_back(i);
                }
                
                if(m.find(s[i]) != m.end()){
                    m[s[i]]++;
                    if( m[s[i]] ==1){
                        count++;
                    }
                }
                
                i++;
                j++;
            }
            
        }
        
        return ans;
    }
};