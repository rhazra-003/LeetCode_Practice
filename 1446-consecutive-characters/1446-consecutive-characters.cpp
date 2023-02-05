class Solution {
public:
    int maxPower(string& s) {
        int ans = 1, streak = 1;
        
        for(int i = 1; i < size(s); i++) 
        {
            if(s[i] == s[i-1]) 
            {
                ans = max(ans, ++streak);    // same character => increment streak and update ans
            }
            else 
            {
                streak = 1;                                // different character => reset consecutive streak
            }
        }
        
        return ans;
    }
};