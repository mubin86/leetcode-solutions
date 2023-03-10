class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        vector<string>circularWords(words.begin(), words.end());
        int rightDistance = 0;
        int leftDistance = 0;
        bool find = false;

        for(int i=0; i<words.size(); i++){
            circularWords.push_back(words[i]);
        }

        for(int i=startIndex; i< circularWords.size(); i++){
            if(circularWords[i] == target){
                find = true;
                break;
            }
            rightDistance++;
        }
        for(int i=words.size()+startIndex; i>= 0; i--){
            if(circularWords[i] == target){
                find = true;
                break;
            }
            leftDistance++;
        }

        if(!find){
            return -1;
        }else{
            return rightDistance < leftDistance ? rightDistance : leftDistance;
        }
    }
};