class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
    
        int count=0;
        int maxi=-1;
        
        for(int i=0;i<arr.size();i++)
        {
          maxi=max(arr[i],maxi);
        
            if(maxi==i)
            {
                count++; 
            }
        
        }
        
        return count;
    }
};