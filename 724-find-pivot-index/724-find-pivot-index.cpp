class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=1; i<n; i++)
        {
            nums[i] += nums[i-1];
        }
        
        int sum = nums[n-1];
        
        if(sum-nums[0] == 0)
        {
            return 0;
        }
        
        for(int i=1; i<n; i++)
        {
            if(sum-nums[i]==nums[i-1])
            {
                return i;
            }
        }
        
        return -1;
    }
};