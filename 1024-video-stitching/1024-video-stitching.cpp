class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        int count = 0;
        int start = 0;
        int maxm = 0;
        
        while(start < time) 
        {
            for(auto clip : clips) 
            {
                if(start >= clip[0])
                {
                    maxm = max(maxm, clip[1]);
                }
            }
            
            if(start == maxm) 
            {
                return -1;
            }
            
            start = maxm;
            count++;
        }
        
        return count;
    }
};