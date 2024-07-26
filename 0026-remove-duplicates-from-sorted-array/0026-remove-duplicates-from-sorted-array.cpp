class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = 1;
        
        for(int i=1; i<nums.size(); i++)
        {
            if (nums[i] != nums[i-1])
            {
                nums[length] = nums[i];
                length += 1;
            }
        }
        
        return length;
    }
};