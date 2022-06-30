class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int cost = 0;
        
        sort(nums.begin(), nums.end());
        
        int mid = nums.size()/2;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            cost += abs (nums[i] - nums[mid]);
        }
        
        return cost;
    }
};