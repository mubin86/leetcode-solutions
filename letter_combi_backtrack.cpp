class Solution {
public:
    
     void solve(vector<string>& res,map<char,string>& m,string ip,string op,int idx){
        if(idx == ip.size()){
            res.push_back(op);
            return;
        }
        cout<<"m[ip[idx]].size() "<<m[ip[idx]].size()<<endl;
         
        for(int i = 0;i<m[ip[idx]].size();i++){
            
            op.push_back(m[ip[idx]][i]);
            
            solve(res,m,ip,op,idx+1);
            
            op.pop_back();
        }
    }
    
    
    vector<string> letterCombinations(string ip) {
        if(ip.size() == 0)
            return {};
        
        map<char,string> m;
        
        m['0'] = "";
        m['1'] = "";
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        
        string op;
        
        vector<string> res;
        
        solve(res,m,ip,op,0);
        
        return res;
       
    }
};