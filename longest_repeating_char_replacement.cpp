class Solution {
public:
   unordered_map<char,int>m;
    
    int cal()//calculates the maxmum occuring character in the window
    {
            int maxOccur=1;
            for(auto it = m.begin(); it!=m.end(); it++)
            {
                    maxOccur = max(maxOccur, it->second);
            }
            return maxOccur;
    }
    
    int characterReplacement(string s, int k) {
       
            int n= s.length();
            int i= 0;
            int j= 0;
            int ans= 1;
        
            while(j<n)
            {
                m[s[j]]++;
                int maxi = cal();//maximum ocurring character
                int win = j-i+1;//window size
                
                if(win-maxi<=k)
                {
                    ans = max(ans, j-i+1);
                }
                else
                {
                    m[s[i]]--;
                    if(m[s[i]]==0){
                        m.erase(s[i]);  
                    } 
                    i++;
                }
                
                j++;
            }
        
            return ans;
    }
};