class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size();
        vector <int> :: iterator it;
        
        for(int i=0; i<size; i++)
        {
            int x = nums1[i];
            it = find(nums2.begin(), nums2.end(), x);
            int j = it-nums2.begin();
            
            int t=0;
            
            for(; j<nums2.size(); j++)
                if(nums2[j]>x)
                {
                    t=1;
                    nums1[i] = nums2[j];
                    break;
                }
            
            if(t==0)
                nums1[i] =-1;
        }
        
        return nums1;
    }
};