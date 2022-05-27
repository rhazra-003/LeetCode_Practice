class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (int i = s.size() / 2; i >= 1; i--) 
        {
            if (s.size() % i == 0) 
            {
                int nums = s.size() / i;
                string sub = s.substr(0, i);
                string f = "";
            
                for (int j = 0; j < nums; j++) 
                {
                    f += sub;
                }
                
                if (f == s) 
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};