class Solution {
public:
    // int tab[1001][1001];
    
//     int find(string first, string second, int s, int t){
//         if(s == 0 || t == 0){
//             return 0;
//         }
        
//         if(tab[s][t] != -1){
//             return tab[s][t];
//         }
        
//         if(first[s-1] == second[t-1]){
            
//             return tab[s][t] = 1 + find(first, second, s-1, t-1); 
//         }
        
//         return tab[s][t] = max(find(first, second, s-1, t), find(first, second, s, t-1));
        
        
//     }
    
//     int longestPalindromeSubseq(string s) {    
//         memset(tab, -1, sizeof(tab));
        
//         string t = s;
//         reverse(t.begin(), t.end());
        
//         return find(s, t, s.length(), t.length());
        
//     }
    
    
    //another approach
//     int longestPalindromeSubseq(int l, int r, string &s) {
            
//         if(l==r) return 1;
//         if(l>r) return 0;  
//         return s[l]==s[r] ? 2 + longestPalindromeSubseq(l+1,r-1, s) : 
//                     max(longestPalindromeSubseq(l+1,r,s),longestPalindromeSubseq(l,r-1, s)); 
    
//     }
    
//      int longestPalindromeSubseq(string s) {
         
//         return longestPalindromeSubseq(0,s.size()-1,s); 
//     }
    
    
    
    
    //top down dp approach
    int longestPalindromeSubseq(string s) {    
        string str=s;
        reverse(s.begin(),s.end());
        int n=s.size();
        int dp[n+1][n+1];
        
        for(int i=0; i<n+1; i++){
             dp[i][0]=0,
            dp[0][i]=0;
        }
           
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<n+1; j++)
            {
                if(str[i-1] == s[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[n][n];
        
    }
    
};