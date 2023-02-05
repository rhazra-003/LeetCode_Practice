class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26, 0);
        
        for(int i=0;i<chars.size();i++) 
        {
            freq[chars[i]-'a']++;
        }
        
        int res=0;
        
        for(int i=0;i<words.size();i++) 
        {
            vector<int> tmp=freq;
            bool flag=true;
            
            for(int j=0;j<words[i].size();j++)
            {
                tmp[words[i][j]-'a']--;
                
                if(tmp[words[i][j]-'a']<0) 
                {
                    flag=false; 
                    break;
                }
            }
            
            if(flag)
            {
                res+=words[i].size();
            }
        }
        
        return res;
    }
};