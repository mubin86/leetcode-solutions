class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());

        string str1 = "";
        str1.push_back(s[0]);
        str1.push_back(s[3]);

        string str2 = "";
        str2.push_back(s[1]);
        str2.push_back(s[2]);

        return stoi(str1) + stoi(str2);
    }
};