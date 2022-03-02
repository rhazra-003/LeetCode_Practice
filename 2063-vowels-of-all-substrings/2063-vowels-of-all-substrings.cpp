class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
    }
    
    long long countVowels(string word) {
        long long count = 0;
        
        for(int pos=0; pos < word.size(); pos++) 
        {
            if(isVowel(word[pos])) 
            {
                count += (long)(word.size() - pos) * (long)(pos + 1);
            }
        }
        
        return count;
    }
};