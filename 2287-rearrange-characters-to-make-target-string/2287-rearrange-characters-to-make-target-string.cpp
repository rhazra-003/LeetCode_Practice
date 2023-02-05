class Solution {
public:
    vector<int> freq(string_view s){
        vector<int> f(26);
        
        for(const auto& ch : s) 
        {
            f[ch-'a']++;
        }
        
        return f;
    }
    
    int rearrangeCharacters(string s, string t) {
        auto fs = freq(s);
        auto ft = freq(t);
        
        int res = INT_MAX;
        
        for(const auto& ch: t)
        {
            res = min(res, fs[ch-'a']/ft[ch-'a']);
        }
        
        return res;
    }
};