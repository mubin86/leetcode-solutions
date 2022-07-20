class Solution {
public:
	bool check(string s, string w) {
		int i = 0, j = 0;
        
		while(true) {
			if(j == w.length()) {
                return true;
            }
            
			int a = s.find(w[j], i); //it starts searching from the i index of s
			
            if(a < 0) {
                return false;
            }
            else {
				j++;
				i = a + 1;
			}
		}
        
		return true;
	}
    
	int numMatchingSubseq(string s, vector<string>& words) {
		int count = 0;
        
		for(int i = 0; i < words.size(); i ++){
           if(check(s, words[i])){
              count ++;  
           } 
        } 
            
		return count;
	}
};