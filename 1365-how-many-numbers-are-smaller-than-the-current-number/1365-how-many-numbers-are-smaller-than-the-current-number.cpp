class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int i, j;
        int count[101] = {};
		int n = nums.size();
        
        for(i = 0; i<n; i++) 
        {
            count[nums[i]]++;
        }
        
        for(i = 1; i < 101; i++)
        {
            count[i] += count[i - 1];
        }
        
        for(i = 0; i<n; i++)
        {
            if(nums[i] == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(count[nums[i] - 1]);
            }   
        }
        
        return ans;
    }
};