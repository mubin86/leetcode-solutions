class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        
        for(int i=0; i<students.size(); i++){
            q.push(students[i]);        
        }
        
        int i=0;
        int attempt = 0;
        
        while(!q.empty()){
            int temp = q.front();
            if(temp == sandwiches[i]){
                q.pop();
                i++;
                attempt = 0;
            }else{
                q.pop();
                q.push(temp);
                attempt++;
                if(attempt > q.size()){
                    break;
                }
            }
        }
        
        return q.size();
    }
};