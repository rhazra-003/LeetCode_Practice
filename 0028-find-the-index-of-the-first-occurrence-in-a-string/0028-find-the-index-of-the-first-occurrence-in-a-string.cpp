class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.size(); i++)
        {
            string sub="";
            
            if(haystack[i] == needle[0])
            {
                sub = haystack.substr(i, needle.size());
                
                if(sub == needle) 
                {
                    return i;
                }
            }
        }
        
        return -1;
    }
};