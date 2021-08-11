class Solution {
public:
    
    void solve(string temp,int open ,int close,vector<string>& ans,int n)
    {
         if(open==n && close==n)
        {   
            ans.push_back(temp);
            return;
        }

        if(open > n || close > n || close > open)return;
       
        solve(temp+'(',open+1,close,ans,n);
     
         solve(temp+')',open,close+1,ans,n);
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve("",0,0,ans,n);
        return ans;
    }
};