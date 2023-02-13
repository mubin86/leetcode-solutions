class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int firstIndex = -1;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '6'){
                firstIndex = i;
                break;
            }
        }

        if(firstIndex != -1){
            s[firstIndex] = '9';
        }

        return stoi(s);
    }
};