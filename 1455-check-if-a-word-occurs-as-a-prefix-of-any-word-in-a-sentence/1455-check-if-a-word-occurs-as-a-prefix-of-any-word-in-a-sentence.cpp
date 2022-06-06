class Solution {
public:
    int isPrefixOfWord(string sent, string word) {
        int word_cnt = 1, j = 0;
        
        for (auto i = 0; i < sent.size() && j < word.size(); ++i)
        {
            word_cnt += sent[i] == ' ';
            
            if (sent[i] == word[j])
            {
                j = j > 0 ? j + 1 : (i == 0 || sent[i -1] == ' ');
            }
            else
            {
                j = 0;
            }
        }
        
        return j == word.size() ? word_cnt : -1;
    }
};