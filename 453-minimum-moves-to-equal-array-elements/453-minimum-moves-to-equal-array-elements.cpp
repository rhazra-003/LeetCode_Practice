class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cost = 0;
        
        for (int i = 0; i < nums.size(); i++) 
        {
             cost += nums[i] - nums[0];
        }
        
        return cost;
    }
};