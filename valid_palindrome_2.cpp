class Solution {
public:
     bool findPalindrome(string& s,int l,int r,int atMostMismatchAllowed)
    {
        if(atMostMismatchAllowed<0)
            return false;
        
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                return findPalindrome(s,l+1,r,atMostMismatchAllowed-1) 
                    || findPalindrome(s,l,r-1,atMostMismatchAllowed-1);
            }
            
            l++;
            r--;
        }
        
        return true;
    }
    bool validPalindrome(string s) {
       
        int l=0;
        int r=s.size()-1;
        int atMostMismatchAllowed=1;
        
        return findPalindrome(s,l,r,atMostMismatchAllowed);
    }
};