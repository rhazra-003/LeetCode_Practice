class Solution {
public:
    bool isPossible(vector<int>& t) {
        auto s = accumulate(begin(t), end(t), (long long)0);
        auto i = max_element(begin(t), end(t)) - begin(t);
        
        while (s > 1 && t[i] > s / 2) 
        {
            s -= t[i];
            
            if (s <= 1)
            {
                return s;
            }
            
            t[i] = t[i] % s;
            s += t[i];
            i = max_element(begin(t), end(t)) - begin(t);
        }
        
        return s == t.size();
    }
};