class Solution { 
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.length(), n = s2.length(), l = s3.length();
        
        if (m > n) 
        {
            return isInterleave(s2, s1, s3);
        }
        
        if (l != m + n) 
        {
            return false;
        }
        
        bool *dp = new bool[m + 1]();
        dp[0] = true;
        
        for (int i = 1; i <= m; i++)
        {
            dp[i] = dp[i - 1] && s3[i - 1] == s1[i - 1];
        }
        
        for (int j = 1; j <= n; j++) 
        {
            dp[0] = dp[0] && s3[j - 1] == s2[j - 1];
            
            for (int i = 1; i <= m; i++)
            {
                dp[i] = (dp[i - 1] && s3[i + j - 1] == s1[i - 1]) || (dp[i] && s3[i + j - 1] == s2[j - 1]);
            }
        }
        
        return dp[m];
    }
};