class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp; // number -> amount
        int ans = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        if(k == 0)
        {
            for(auto m : mp)
            {
                if(m.second > 1)
                {
                    ans++;
                }
            }
        } 
        else 
        {
            for(auto m: mp)
            {
                if(mp.count(m.first + k) != 0)
                {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};