// Moore’s Voting Algorithm

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count = 0;
//         int candidate = 0;

//         for (int num : nums) 
//         {
//             if (count == 0)
//             {
//                 candidate = num;
//             }
            
//             if(num == candidate) 
//             {
//                 count += 1;
//             }
//             else 
//             {
//                 count -= 1;
//             }
//         }

//         return candidate;
//     }
// };

// Unorderedmap method

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto i : nums)
        {
            mp[i]++;
            
            if(mp[i] > nums.size()/2)
            {   
                return i;
            }
        }

        return -1;
    }
};