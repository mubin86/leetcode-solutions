class Solution {
public:
   bool isvowel(char s)
    {
        if(s == 'a'|| s == 'e'||s == 'i'||s == 'o'||s=='u')
        {
            return true;
        }
        return false;
    }
    
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i = 0;i<k;i++)
        {
            if(isvowel(s[i]))
            {
                count++;
            }
        }
        
        int newcount = count;
        
        for(int i = k; i<s.length(); i++)
        {
            if(isvowel(s[i-k]))
            {
                count--;
            }
            if(isvowel(s[i]))
            {
                count++;
            }
            newcount = max(count,newcount);
        }
        
        return newcount;
    }
};