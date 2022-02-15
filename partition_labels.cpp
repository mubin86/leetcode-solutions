class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        int start{0},mx{INT_MIN};
        vector<int> h(26,0);
        cout<<"out is "<<'z'-'a';
        
        for(int i=0;i<s.size();i++) h[s[i]-'a']= i;
        
        for(int i=0;i<s.size();i++)
        {
            
            mx=max(h[s[i]-'a'],mx);
            if(mx<=i) 
            {
                res.push_back(i-start+1);
                start=i+1;
            }
        }
        return res;
    }
};