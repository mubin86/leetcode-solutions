class Solution {
public:
    vector<vector<int>> res;
    
    void add(int k,int n, int s, vector<int> t,int sum)
    {
        if(sum==n and k==t.size())
        {
            res.push_back(t);
            return;
        }   
        
        if(t.size()>=k and s>n){
             return; 
        }
          
        for(int i=s+1; i<=9; i++)
        {
            
           t.push_back(i); 
           add(k, n, i, t, sum+i); 
           t.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> t;
        
        add(k,n,0,t,0);
        
        return res;
    }
};