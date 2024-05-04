class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int balance = 0;
        int element = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(balance == 0){
                element = nums[i];
            }
            if(nums[i] == element)
            {
                balance++;
            }
            else{
                balance--;
            }
        }
        
        return element;
    }
};