class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = 0, secondLargest = -1;
        
        if (nums.size() < 2) 
        {
            return 0;
        }
        
        for (int i=1; i<nums.size(); i++) 
        {
            if (nums[i] > nums[largest])
                largest = i;
        }

        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] != nums[largest]) 
            {
                if (secondLargest == -1)
                {
                    secondLargest = i;
                }
                else if (nums[i] > nums[secondLargest])
                {
                    secondLargest = i;
                }
            }
        }
        
        if(nums[largest] >= 2*nums[secondLargest])
        {
            return largest;
        }
        else
        {
            return -1;
        }
    }
};