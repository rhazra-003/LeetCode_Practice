class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int maxm = 0;
        
        sort(nums.begin(), nums.end(), greater<int>());
 
        for (int i=0; i<nums.size()-2; i++)
        {
            if (nums[i] < nums[i+1] + nums[i+2])
            {
                maxm = max(maxm, nums[i] + nums[i+1] + nums[i+2]);
                break;
            }
        }
        
        if (maxm) 
        {
            return maxm;
        }
        else
        {
            return 0;
        }
    }
};