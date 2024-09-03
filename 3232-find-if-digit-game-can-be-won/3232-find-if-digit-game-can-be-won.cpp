class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        
        for(int i=0; i<nums.size(); i++) {
            sum1 += nums[i];
            if(nums[i]<=9) {
                sum2 += nums[i];
            }
        }
        
        if(2*sum2 == sum1) {
            return false;
        }
        
        return true;
    }
};