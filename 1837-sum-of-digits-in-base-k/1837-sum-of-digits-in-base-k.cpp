class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        while (n >= k)
        {
            ans = ans + n%k;
            n = floor(n/k);
        }
            
        ans = ans + n;
        
        return ans;
    }
};