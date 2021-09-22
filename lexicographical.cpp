class Solution {
public:
    vector<int> lexicalOrder(int n) {
        // n=100;
        vector<int> res;
        helper(1, n, res);
        return res;
    }
    
    void helper(int target, int n, vector<int>& res) {
        if (target > n) return;
        res.push_back(target);
        helper(target * 10, n, res);
        cout<<"t+1 is "<<target+1<<" ";
        if (target % 10 != 9) helper(target+1, n, res);
    }

};