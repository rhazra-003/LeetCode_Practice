class Solution
{
    public:
        int minimumRounds(vector<int> &a)
        {
            int ans = 0, x;
            map<int, int> freq;
            
            for (auto x: a)
            {
                freq[x]++;
            }
            
            for (auto p: freq)
            {
                x = p.second;
                
                if (x == 1)
                {
                    return -1;
                }
                
                ans += (x / 3);
                
                if (x % 3 != 0)
                {
                    ans++;
                }
            }
            
            return ans;
        }
};