class Solution {
public:
    int maximumSwap(int num) 
    {
        string s=to_string(num);
        int res=num;

        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                string temp = s;
                swap(temp[i],temp[j]);
                int n = stoi(temp);
                res = max(res,n);
            }
        }

        return res;
    }
};