class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            nums[i]=floor(log10(nums[i]))+1;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if (nums[i]%2 == 0)
            {
                ans++;
            }
        }
        
        return ans;
    }
};