class Solution {
public:
    int balancedString(string s) {
        unordered_map<int, int> count;
        
        int res = s.length(), i=0, k = s.length()/4;
        
        for (int j=0; j<s.length(); ++j) 
        {
            count[s[j]]++;
        }
        
        for (int j=0; j<s.length(); ++j) 
        {
            count[s[j]]--;
            
            while (i < s.length() && count['Q'] <= k && count['W'] <= k && count['E'] <= k && count['R'] <= k) 
            {
                res = min(res, j-i+1);
                
                count[s[i++]] += 1;
            }
        }
        
        return res;
    }
};