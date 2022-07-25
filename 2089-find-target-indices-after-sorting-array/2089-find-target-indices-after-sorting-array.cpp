class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        
        int i = 0;
        
        for(auto e: nums)
        {
            if(e == target) 
            {
                res.push_back(i);
            }
            
            ++i;
        }
        
        return res;
    }
};