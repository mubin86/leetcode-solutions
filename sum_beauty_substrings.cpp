class Solution {
public:
    
    int beautySum(string s) {
		int n=s.size();
		int sum=0;
		
        for(int i=0; i<n; i++){
            
			map<char,int>mp;
			
            for(int j=i; j<n; j++){
				
                mp[s[j]]++;
				
                int a = INT_MIN;
                int b = INT_MAX;
				
                for(auto i:mp){
					a = max(a, i.second);
					b = min(b, i.second);
				}
                
				sum += a-b;
			}
		}
        
		return sum;
	}
};