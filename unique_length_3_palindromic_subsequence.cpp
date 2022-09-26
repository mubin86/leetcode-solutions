class Solution {
public:
    unordered_map<int ,int>m;
    int sol(int a,int b, string s){
     m.clear();
        for(int i=a;i<b;i++){
            m[s[i]-'a']++;
        }
        return m.size();
    }
    int countPalindromicSubsequence(string s) {
     unordered_map<int , vector<int>>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a'].push_back(i);
        }
        int ans =0;
        for(auto it =mp.begin();it!=mp.end();it++){
            if(it->second.size()<2){
                continue;
            }
         ans += sol(it->second[0]+1,it->second[it->second.size()-1] , s);
        }
        return ans;
    }
};