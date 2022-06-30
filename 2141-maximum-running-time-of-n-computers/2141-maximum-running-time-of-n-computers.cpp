class Solution {
public:
    long long maxRunTime(int n, vector<int>& b) {
        sort(b.begin(), b.end());
        long long sum = accumulate(b.begin(), b.end(), 0L);
        int k = 0, na = b.size();
        
        while (b[na - 1 - k] > sum / (n - k))
        {
            sum -= b[na - 1 - k++];
        }
        
        return sum / (n - k);
    }
};