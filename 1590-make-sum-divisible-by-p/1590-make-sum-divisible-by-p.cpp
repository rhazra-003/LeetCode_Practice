class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size(), res = n, need = 0, cur = 0;
        
        for (auto a : nums)
        {
            need = (need + a) % p;
        }
        
        unordered_map<int, int> last = {{0, -1}};
        
        for (int i = 0; i < n; ++i) 
        {
            cur = (cur + nums[i]) % p;
            last[cur] = i;
            int want = (cur - need + p) % p;
            
            if (last.count(want))
            {
                res = min(res, i - last[want]);
            }
        }
        
        return res < n ? res : -1;
    }
};