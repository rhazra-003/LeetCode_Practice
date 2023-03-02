// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int mini = INT_MAX ;
//         int maxi = 0 ;
        
//         for(auto x:prices)
//         {
//             mini = min(x,mini) ;
//             maxi = max(maxi,x-mini) ;
//         }
    
//     return maxi ;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = INT_MAX ;
        int maxm = 0 ;
        
        for(int i=0; i<prices.size(); i++)
        {
            minm = min(prices[i], minm) ;
            maxm = max(maxm, prices[i]-minm) ;
        }
    
    return maxm ;
    }
};