class Solution {
public:
    int totalStrength(vector<int>& s) {
        long long res = 0, sz = s.size(), mod = 1000000007;
        vector<int> st; // mono-increasing stack.
        vector<long long> pps(s.size() + 1);
        partial_sum(begin(s), end(s), begin(pps) + 1, [&](int s, int n){ return (s + n) % mod; });
        partial_sum(begin(pps), end(pps), begin(pps));

        for (int r = 0; r <= sz; ++r) 
        {
            while(!st.empty() && (r == sz || s[st.back()] >= s[r])) 
           {
                long long i = st.back(); st.pop_back();
                long long l = st.empty() ? -1 : st.back();
                res = (res + (mod + (pps[r] - pps[i]) * (i - l) % mod - (pps[i] - pps[max(0LL, l)]) * (r - i) % mod) * s[i]) % mod;
           }

                st.push_back(r);
        }
        
        return res;
    }
 
};