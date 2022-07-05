class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int res = 0;
        
        special.insert(end(special), {bottom-1, top+1});
        
        sort(begin(special), end(special));
        
        for (int i=1; i<special.size(); ++i)
        {
            res = max(res, special[i] - special[i-1] - 1);
        }
        
        return res;
    }
};