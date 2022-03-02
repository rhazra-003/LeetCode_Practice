class Solution {
public:
    bool isGoodSubstring(vector<int> v)
    {
         return (v[0] >= 1 && v[1] >= 1 && v[2] >= 1);
    }
    
    int numberOfSubstrings(string s) 
    {
        int i=0, j=0, total = 0;
        vector<int> counts(3,0);
        
        while (j < s.length()) 
        {
            counts[s[j] - 'a']++;
            
            if (!isGoodSubstring(counts)) 
            {
                j++;
            }
            else 
            {
                while (isGoodSubstring(counts)) 
                {
                    total += (s.length() - j);
                    counts[s[i] - 'a']--;
                    i++;
                }
                
                j++;
            }
        }
        
        return total;
    }
};