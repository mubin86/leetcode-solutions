class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        double result = 0;
        priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, greater<pair<double, pair<int, int>>>> pq; 

        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                pq.push(make_pair((double) arr[i]/ (double) arr[j], make_pair(arr[i], arr[j])));
            }
        }

        int i = 1;
        while(i < k){
            pq.pop();
            i++;
        }

        pair<double, pair<int, int>> temp = pq.top(); 
        pair<int, int>p = temp.second;
        return {p.first, p.second};
    }
};