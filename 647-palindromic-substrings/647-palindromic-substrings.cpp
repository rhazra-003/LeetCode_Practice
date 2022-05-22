class Solution {
public:
    int countSubstrings(string S) {
        int ans = 0;
       
        for (int i=0; i<S.length(); i++) 
        {
            int j=i-1, k=i;
            
            while(k<S.length()-1 && S[k] == S[k+1]) 
            {
                k++;
            }
            
            ans += (k-j) * (k-j+1)/2, i=k++;
            
            while(~j && k<S.length() && S[k++] == S[j--]) 
            {
                ans++;
            }
        }
        
        return ans;
    }
};