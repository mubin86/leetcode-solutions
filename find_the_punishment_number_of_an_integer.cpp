class Solution {
public:
    bool solve(string str, int i, int tar){
        if(tar==0 and i==str.size()){
            return true;
        }
        
        for(int ind=i; ind<str.size(); ind++){
            string s = str.substr(i, ind-i+1);
            int num = stoi(s);

            if(num<=tar){
                if(solve(str,ind+1,tar-num))return true;
            }
        }

        return false;
    }

    int punishmentNumber(int n) {
        int ans=0;

        for(int i=1;i<=n;i++){
            string str = to_string(i*i);
            
            if(solve(str, 0, i)){
                cout<<i<<" ";
                ans+=i*i;
            }
        }

        return ans;
    }
};