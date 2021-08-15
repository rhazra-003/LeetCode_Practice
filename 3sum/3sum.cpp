class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() == 0) return {};
        else if(nums.size() == 1 && nums[0] == 0) return {};
        
        vector<vector<int>> threeSum;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); ++i){
            if(i == 0 || (i+2 < nums.size() &&(i > 0 && nums[i] != nums[i-1]))){
                int low = i + 1;
                int high = nums.size() - 1;
                int findSum = 0 - nums[i];
                while(low < high){
                    if(nums[low] + nums [high] == findSum){
                        threeSum.push_back({nums[i], nums[low], nums[high]});
                        while(low < high && nums [low] == nums[low + 1]) low++;
                        while(low < high && nums[high] == nums[high - 1]) high--;
                        low++;
                        high--;
                    }else if(nums[low] + nums [high] > findSum){
                        high--;
                    }else {
                        low++;
                    }
                }
            }
        }
        return threeSum;
    }
};