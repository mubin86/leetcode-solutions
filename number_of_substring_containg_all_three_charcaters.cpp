class Solution {
public:
    int numberOfSubstrings(string s) {
        int a = 0, b = 0, c = 0;
        int j = 0, n = s.size(), ans = 0;

        for(int i=0; i<n; i++){
            if(s[i] == 'a') a++;
            else if(s[i] == 'b') b++;
            else c++;

            while(a && b && c){
                ans += (n-i);
                if(s[j] == 'a') a--;
                else if(s[j] == 'b') b--;
                else c--;
                j++;
            }
            
        }
        return ans;
    }
};