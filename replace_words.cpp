class Solution {
    int Sol(string s, int fnd)
    {
        int n = s.size();
        int init = fnd;
        while(fnd < n)
        {
            if(s[fnd] == ' ')
                return fnd - init;
            fnd++;
        }
        return n - init;
    }
    
    public:
        string replaceWords(vector<string>& dictionary, string sentence) {
            int n = dictionary.size();
            // dictionary={"a","b","c"};
            // sentence = "aadsfasf absbs bbab cadsfafs";
            
            for(int i = 0; i < n; i++)
            {
                size_t found = sentence.find(dictionary[i]);
                while(found != string::npos)
                {
                        if(found == 0 || sentence[found-1] == ' '){
                            sentence.replace(found, Sol(sentence, found), dictionary[i]);
                        }
               
                       found = sentence.find(dictionary[i], found + dictionary[i].size());
                }
            }
            return sentence;
    }
};