class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> Trusted(N + 1, 0);
        
        for(auto person : trust)
        {
            Trusted[person[0]]--;
            Trusted[person[1]]++;
        }
        
        for(int i=1; i <= N; i++)
        {
            if(Trusted[i] == N - 1)
            {
                return i;
            }
        }
        
        return -1;
    }
};