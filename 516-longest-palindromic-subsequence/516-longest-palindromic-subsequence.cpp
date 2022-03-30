class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int i = 0, j = 0, n = s.size();
        
        if (n < 2) 
            return n;
        
        vector<int> dp(n, 0), dp2(n, 0);

        for (i=n-1; i>=0; --i)
        {
            dp[i] = 1;
            
            for (j=i+1; j<n; ++j)
            {
                dp[j] = s[i] == s[j] ? dp2[j-1] + 2 : max(dp2[j], dp[j-1]);
            }
            
            dp2.swap(dp);
            dp.clear();
        }
        
        return dp2[n-1];
    }
};