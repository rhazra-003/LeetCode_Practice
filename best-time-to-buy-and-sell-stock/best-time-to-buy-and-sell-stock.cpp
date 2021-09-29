class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX ;
        int maxi = 0 ;
        
        for(auto x:prices)
        {
            mini = min(x,mini) ;
            maxi = max(maxi,x-mini) ;
        }
    
    return maxi ;
    }
};
