class Solution {
public:
    int arrangeCoins(int n) {
        int l = 2, r = n;
        
        while(l <= r)
        {
            long long m = l + (r-l)/2;
            
            if((m+1)*m/2 > n)
            {
                r = m-1;
            }
            else
            {
                l = m+1;
            }
        }
        
        return r;
    }
};