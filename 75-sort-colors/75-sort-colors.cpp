// Dutch National Flag Algo / 3  pointers Approach

// class Solution { 
// public:
//     void sortColors(vector<int>& nums) {
//         int i = 0, j = i, k = nums.size() - 1;
        
//         while(j <= k)
//         {
//             if(nums[j] == 0) 
//             {
//                 swap(nums[i++], nums[j++]);
//             }
            
//             else if(nums[j] == 1) 
//             {
//                 j++;
//             }
            
//             else 
//             {
//                 swap(nums[k--], nums[j]);
//             }
//         }
//     }
// };

class Solution { 
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};