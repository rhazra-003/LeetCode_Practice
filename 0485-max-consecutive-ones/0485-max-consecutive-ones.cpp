class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxSize = 0;
        
        for(int i=0; i < nums.size(); i++) {
            if(nums[i] == 1) { 
                cnt++;
            } else {
                cnt = 0;
            } 
            
            maxSize = max(cnt, maxSize);
        }
        
        return maxSize;
    }
};