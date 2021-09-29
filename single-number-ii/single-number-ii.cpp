class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < n; i += 3){
            if ( i + 1 >= nums.size()){
                return nums[i];
            }
            
            if(nums[i+1]!=nums[i])
                return nums[i];
            }
        return -1;
    }
};