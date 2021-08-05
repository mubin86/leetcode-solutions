class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<string>temp;
//         vector<vector<string>>result;
//         string x;
//         string y;
        
//      for(int i=0; i< strs.size(); i++){
//          x = strs[i];
//          sort(x.begin(), x.end());
        
//          for(int j = i+1; j<strs.size(); j++){
//             y = strs[j];
//              // cout<<"j time str[j] is "<<y<<endl;
//              sort(y.begin(), y.end());
                
//              if(x == y){
//                    temp.push_back(strs[j]);
//                    auto iterator = strs.begin()+j;
//                     strs.erase(iterator);
//                  j--;
//              }
//          }
//          temp.push_back(strs[i]);
//          result.push_back(temp);
//          temp.clear();
//      }    
        
        
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            mp[s1].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto it=mp.begin();it!=mp.end();it++)
        {   
            // cout << it->second;
            result.push_back(it->second);
        }
    
        return result;
    }
};