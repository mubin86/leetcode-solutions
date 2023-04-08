class Solution {
public:
//by dp and memorization
//tc=o(n*n) n=size of words
//sc=o(n*n)+o(n) n=stack space 
int dp[1001][1001];
   
    bool check(string &s1, string &s2)
    {
        if(s1.size()==s2.size() || s1.size()>s2.size()+1){
            return false;
        }  

        int i=0;
        int j=0;
        while(i<s1.size()){
            if(j<s2.size() && s1[i]==s2[j]){
                i++,j++;
            }else{
                i++;
            }
        }    

        if(i==s1.size() && j==s2.size()){
            return true;
        }
            return false;  
    }

    int find(int i, int pre, vector<string>& words){
        if(i==-1){
            return 0;
        }
        if(dp[i][pre+1]!=-1){
            return dp[i][pre+1];
        }
   
        int take=0,notTake=0;

        if(pre==-1 || check(words[pre], words[i])){
            take=1+find(i-1,i,words);
        }
        notTake=find(i-1,pre,words);
        
        return dp[i][pre+1] = max(take,notTake);
    }

    int longestStrChain(vector<string>& words) {
        int n=words.size();
        memset(dp,-1,sizeof(dp));
        sort(words.begin(),words.end(),com);
        return find(n-1,-1,words);
    }
    private:
    static bool com(string& a,string& b){
        return a.size()<b.size();
    }
    
};