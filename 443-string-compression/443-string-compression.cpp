class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, index = 0;
        
        while(i < chars.size())
        {
            char current = chars[i];
            int cnt = 1;
            
            while(++i < chars.size() && chars[i] == current)
            {
                cnt++;
            }
            
            chars[index++] = current;
            
            if(cnt > 1)
            {
                for(char& ch : to_string(cnt))
                {
                    chars[index++] = ch;
                }
            }
        }
        
        return index;
    }
};