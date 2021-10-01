class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max_size = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1) 
                count++ ;
            else count = 0 ;
            max_size = max(count,max_size) ;
        }
        
        return max_size ;
    }
};