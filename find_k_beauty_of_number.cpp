class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count = 0;
        stringstream str1;
        str1<<num;
        string s = str1.str();
        string temp = s.substr(0, k);
        int n = stoi(temp);
        if(num % n == 0){
            count++;
        }

        for(int i=k; i<s.size(); i++){
            temp.erase(temp.begin() + 0);
            temp.push_back(s[i]);
            n = stoi(temp);
            if(n!= 0){
                if(num % n == 0){
                    count++;
                }
            }
        }

        return count;
    }
};