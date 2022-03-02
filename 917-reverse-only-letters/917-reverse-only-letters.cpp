class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> res;
        map<int,char> m;
        
        for(int i=0;i<s.size();i++)
        {
            if(!isalpha(s[i])) 
            {
                m[i]=s[i];
            }
            else 
            {
                res.push_back(s[i]);
            }
        }
        
        reverse(res.begin(),res.end());
        
        for(auto i:m)
        {
            res.insert(res.begin() + i.first, i.second);
        }
        
        string str(res.begin(), res.end());
        
        return str;
    }
};