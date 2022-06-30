class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for (int i = 0, q = 1, k = n; i < n; i++, k++, q++)
        {
            for (int j = k; j > i + q; j--)
            {
                swap(nums[j - 1], nums[j]);
            }
        }
        
        return nums;
    }
};