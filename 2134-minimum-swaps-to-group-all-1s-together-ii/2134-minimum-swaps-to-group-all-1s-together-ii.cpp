class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones = 0, x = 0, onesInWindow = 0;
        ones = count(begin(nums), end(nums), 1);
        
        vector<int> nums2(nums.size() * 2);
        
        for (int i=0; i < nums.size() * 2; i++)
        {
            nums2[i] = nums[i % nums.size()];
        }
        
        for (int i=0; i < nums.size() * 2; i++)
        {
            if (i >= ones && nums2[i - ones] == 1) 
            {
                x--;
            }
            if (nums2[i] == 1)
            {
                x++;
            }
            
            onesInWindow = max(x, onesInWindow);
        }
        
        return ones - onesInWindow;
    }
};