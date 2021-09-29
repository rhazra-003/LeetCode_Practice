class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        if(binary_search(nums.begin(), nums.end(), target))
            return low;
        
        return -1;
    }
};