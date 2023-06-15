class BrowserHistory {
public:
    vector<string> v1, v2;

    BrowserHistory(string homepage)
    {
        v1.push_back(homepage);
    }
    
    void visit(string url) 
    {
        if(!v2.empty()){
            v2.clear();
        }
        v1.push_back(url);
    }
    
    string back(int steps) 
    {
        while(v1.size() > 1 && steps)
        {
            v2.push_back(v1.back());
            v1.pop_back();
            steps--;
        }
        return v1.back();
    }
    
    string forward(int steps) 
    {
        while(!v2.empty() && steps)
        {
            v1.push_back(v2.back());
            v2.pop_back();
            steps--;
        }
        return v1.back();
    }
};