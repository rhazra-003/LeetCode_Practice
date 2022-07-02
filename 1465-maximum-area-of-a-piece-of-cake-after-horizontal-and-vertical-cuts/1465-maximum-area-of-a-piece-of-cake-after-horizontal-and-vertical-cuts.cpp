class Solution {
public:
    int maxArea(int h, int w, vector<int>& hC, vector<int>& vC) {  
        sort(hC.begin(), hC.end());
        sort(vC.begin(), vC.end());
        
        auto MaxhD = max(hC[0], h - hC.back());
        auto MaxvD = max(vC[0], w - vC.back());
        
        for (auto i = 0; i < hC.size() - 1; ++i)
        {
            MaxhD = max(MaxhD, hC[i + 1] - hC[i]);
        }
        
        for (auto i = 0; i < vC.size() - 1; ++i)
        {
            MaxvD = max(MaxvD, vC[i + 1] - vC[i]);
        }
        
        return (long) MaxhD * MaxvD % 1000000007;  
    }
};