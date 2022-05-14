class Solution {
public:
    int countOdds(int low, int high) {
       
        int a = low;
        int b = high;
        
        int count = 0;
        
        if(low%2)
        {
            count++;
            a++;
        }
        
        if(high%2)
        {
            count++;
            b--;
        }

        count += (b-a)/2;
        
        return count;
    }
};