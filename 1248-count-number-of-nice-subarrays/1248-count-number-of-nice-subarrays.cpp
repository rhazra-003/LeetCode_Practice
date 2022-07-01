class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0, n = nums.size(), odd = 0;
        vector<int> frequency(n+1);
     
        for (int i = 0; i < n; i++) 
        {

            frequency[odd]++;

            if (nums[i] & 1)
            {
                odd++;
            }

            if (odd >= k)
            {
                count += frequency[odd - k];
            }
        }
        
        return count;
    }
};