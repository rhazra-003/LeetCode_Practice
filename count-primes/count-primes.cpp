class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        
        vector<bool> list (n,true);
        
        for(int i=2; i*i<n; i++)
            if(list[i] == true)
                for(int j=i*i; j<n; j+=i)
                    list[j] = false;
        
        for(int i=2; i<n; i++)
            if(list[i])
                ans++;
        
        return ans;
    }
};