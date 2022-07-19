class Solution {
public:
    bool checkRecord(string s) {
        int abs = 0, late = 0;
        
        for(auto &ch: s)
        {
            if(ch == 'A')
            {
                abs++;
            }
            if(ch == 'L')
            {
                late++;
            }
            else
            {
                late = 0;
            }
            
            if(abs>=2 || late>2)
            {
                return false;
            }
        }
        
        return true;
    }
};