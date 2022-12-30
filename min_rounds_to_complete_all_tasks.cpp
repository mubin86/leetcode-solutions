class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int>m;
        int count = 0;
        for(int i=0; i<tasks.size(); i++){
            m[tasks[i]]++;
        }

        for(auto it = m.begin(); it!= m.end(); it++){
            if(it->second < 2){
                return -1;
            }
            int remainder = it->second % 3;
            int quotient = it->second / 3;

            if(remainder == 1){
                quotient = (it->second - 3) / 3;
                remainder = (it->second - 3) % 3; 
                quotient += (remainder +3) / 2;
                
            }else if(remainder == 2){
                quotient += 1;
            }

            count += quotient;
        }

        return count;
    }
};