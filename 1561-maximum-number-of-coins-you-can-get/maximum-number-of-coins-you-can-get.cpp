class Solution {
public:
    int maxCoins(vector<int>& A) {
        
        sort(A.begin(), A.end());
        
        int res = 0;
        
        for (int i = A.size()/3; i<A.size(); i += 2)
        {
            res += A[i];
        }
        
        return res;
    }
};
