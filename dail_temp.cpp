class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        vector<int> result(t.size());
      
//         for(int i=0; i<temperatures.size(); i++){
//             int count = 1;
//             bool flag = false;
//             for(int j=i+1; j < temperatures.size(); j++){
                
//                 if(temperatures[j] > temperatures[i]){
//                     flag = true;
//                     break;
//                 }else{
//                     count++;
//                 }
//             }
//             if(!flag){
//                   result.push_back(0);
//             }else{
//                   result.push_back(count);
//             }
            
          
//         }
        
        //***monotonic decreasing stack***////
          stack<int> s;
            
        for(int i =0;i<t.size();i++){
                
            while( !s.empty() && t[s.top()] < t[i] ){
                    int j  = s.top();
                    result[j] = i - j;
                    s.pop();
            }
                
            s.push(i);
        }
        
        return result;
    }
};