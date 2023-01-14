class Solution {
public:
    bool isPalindrome(string s, int l, int r)
    {
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void f(string s, int indx, vector<string>&ans, vector<vector<string>>&res)
    {
        if(indx==s.length())
        {
            res.push_back(ans);
            return;
        }
        for(int i=indx;i<s.length();i++)
        {
            if(isPalindrome(s, indx, i))
            {
                ans.push_back(s.substr(indx, i-indx+1));
                f(s, i+1, ans, res);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string>ans;
        f(s, 0, ans, res);
        return res;
    }
};