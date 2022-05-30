class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxf = 0, i = 0;
        vector<int> count(26);
        
        for (int j = 0; j < s.length(); ++j)
        {
            maxf = max(maxf, ++count[s[j] - 'A']);
            
            if (j - i + 1 > maxf + k)
            {
                --count[s[i++] - 'A'];
            }
        }
        
        return s.length() - i;
    }
};