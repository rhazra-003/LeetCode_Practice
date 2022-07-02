class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int> &s, int time) {
        int n = s.size();
        vector<int> ans;  
        vector<int> left(n,0), right(n,0);
        
        for(int i=1; i<n; i++)
        {
            if(s[i] <= s[i-1])
            {
                left[i] = 1+left[i-1]; // count of elements from [0,i-1] >= s[i]
            }
        }
        
        for(int i=n-2; i>=0; i--)
        {
            if(s[i] <= s[i+1])
            {
                right[i] = 1+right[i+1]; // count of elements from [i+1,n-1] >= s[i]
            }
        }
        
        for(int i=time; i<n-time; i++)
        {
            if(left[i] >= time && right[i] >= time) 
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};