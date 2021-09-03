class Solution {
public:
    int titleToNumber(string columnTitle) {

        map<char, int>m;
        m.insert({'A', 1});
        m.insert({'B', 2});
        m.insert({'C', 3});
        m.insert({'D', 4});
        m.insert({'E', 5});
        m.insert({'F', 6});
        m.insert({'G', 7});
        m.insert({'H', 8});
        m.insert({'I', 9});
        m.insert({'J', 10});
        m.insert({'K', 11});
        m.insert({'L', 12});
        m.insert({'M', 13});
        m.insert({'N', 14});
        m.insert({'O', 15});
        m.insert({'P', 16});
        m.insert({'Q', 17});
        m.insert({'R', 18});
        m.insert({'S', 19});
        m.insert({'T', 20});
        m.insert({'U', 21});
        m.insert({'V', 22});
        m.insert({'W', 23});
        m.insert({'X', 24});
        m.insert({'Y', 25});
        m.insert({'Z', 26});
        
        long long int count=0;
        int len = columnTitle.length();
        for(int i=0; i<columnTitle.length(); i++){
            count += (m[columnTitle[i]] * pow (26,len-i-1));
        }
        
        return count;
        
    }
    
};