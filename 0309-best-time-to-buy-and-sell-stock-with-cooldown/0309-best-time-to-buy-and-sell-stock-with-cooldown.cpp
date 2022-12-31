class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp[5001][2]={0};
        
        for(int ind=prices.size()-1;ind>=0;ind--)
        {
            for(int can_buy=0;can_buy<2;can_buy++)
            {
                if(can_buy)
                {
                    dp[ind][1] = max(-prices[ind] + dp[ind+1][0], dp[ind+1][1]);
                }
                else 
                {
                    dp[ind][0] = max(prices[ind] + dp[ind+2][1], dp[ind+1][0]);
                }
            }
        }
        return dp[0][1];
    }
};