class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
         unordered_set<string> invalid,vis;
        
        for(auto it:deadends){
            invalid.insert(it);
        }
        
    if(invalid.find("0000") != invalid.end())
        {
             return -1;
        }
           
        
        queue<string> q;
        q.push("0000");
        int step=0;
        
        while(!q.empty()){
            
            int lim=q.size();
            
            while(lim--){
                string s=q.front();
                q.pop();
                
                if(s==target){
                    return step;
                }
                    
                for(int i=0;i<4;i++){
                    //turning on one side
                    string tmp=s;
                    if(s[i]=='9')
                        tmp[i]='0';
                    else
                        tmp[i]+=1;
                    if(vis.find(tmp)==vis.end() && invalid.find(tmp)==invalid.end()){
                        q.push(tmp);
                        vis.insert(tmp);
                    }
                    
                    //turning on other side
                    tmp=s;
                    if(s[i]=='0')
                        tmp[i]='9';
                    else
                        tmp[i]-=1;
                    if(vis.find(tmp)==vis.end() && invalid.find(tmp)==invalid.end()){
                        q.push(tmp);
                        vis.insert(tmp);
                    }
                }
            }
            step++;
        }
        
        return -1;
    }
    
};