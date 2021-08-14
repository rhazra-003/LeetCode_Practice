class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = height.size();
        
        if(s==0 || s==1)
            return 0;
        
        int max = INT_MIN;
        int l = 0;
        int r = s-1;
        
        while(l<r)
        {
            int ar = min(height[l], height[r]) * (r-l);
            if(max < ar)
                max = ar;
            
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return max;
    }
};