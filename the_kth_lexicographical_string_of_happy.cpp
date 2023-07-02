class Solution {
public: 
    void backtrack(int pos, int n, string& s, vector<string>& v)
    {
        if(pos==n){
            v.push_back(s);
            return;
        }

        for(char x='a'; x<='c'; x++){
            if(pos>0 && x == s[pos-1]){
                continue;
            } 

            s += x;
            backtrack(pos+1, n, s, v);
            s.pop_back();
        }
    }

    string getHappyString(int n, int k) {
        vector<string> v;
        string s="";
        backtrack(0,n,s,v);
        
        if(k > v.size()){
            return "";
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};