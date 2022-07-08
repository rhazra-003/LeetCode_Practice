class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> res;
        
        for (int n : nums)
        {
            ++m[n];
        }
        for (const auto [n, cnt] : m)
        {
            if (cnt == 1 && m.count(n + 1) == 0 && m.count(n - 1) == 0)
            {
                res.push_back(n);
            }
        }
        
        return res;
    }
};