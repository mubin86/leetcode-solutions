class Solution {
public:
    bool reorderedPowerOf2(int n)
    {
        string input = to_string(n);
        
        sort(input.begin(), input.end());
        
        for (int i = 0; i < 32; i++)
        {
            string generated = to_string(1 << i);
            
            sort(generated.begin(), generated.end());
            
            if (generated == input){
                return true;
            }  
        }
        
        return false;
    }
};