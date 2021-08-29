class Solution {
public:
     bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> mp;
         
        for(int i = 0; i < wordDict.size(); i++) mp.insert(wordDict[i]);
        
        int n = s.length();
        vector<bool> present(n,0);
        
        for(int i = 0; i < n; i++)
        {
            int j = i;
            string curr = "";
            while(j >= 0)
            {
                curr.insert(0,1,s[j]);
              
                if(mp.find(curr)!=mp.end() && (j==0 || present[j-1])) 
                {
                    present[i] = 1;
                    break;
                }
                j--;
            }
        }
        
        return present[n-1];
     
     }
    
};