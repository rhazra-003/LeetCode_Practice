class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int operations=0;
        sort(nums.begin(),nums.end());
        int left = 0, right = nums.size()-1;
        
        while(left<right)
        {
            if(nums[left]+nums[right] == k)
            {
                operations++;
                nums[left]=0,nums[right]=0;
                
                left++;
                right--;
            }
            
            else if(nums[left]+nums[right] > k) 
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        
        return operations;
    }
};