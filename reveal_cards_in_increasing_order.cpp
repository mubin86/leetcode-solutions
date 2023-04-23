class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> dq;
        sort(deck.begin(),deck.end(),greater<int>());
        int n = deck.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(dq.size() > 1)
            {
                int x = dq.back();
                dq.pop_back();
                dq.push_front(x);
            }

            dq.push_front(deck[i]);
        }
        
        for(int i = 0 ; i < n ; i++)
        {
            deck[i] = dq.front();
            dq.pop_front();
        }
        return deck;
    }
};