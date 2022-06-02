class Solution {
public:
    int maxProfit(vector<int>& p) {
      
        int n = p.size();
        vector<int> l(n ,0);
		l[0] = 0;
		int left = p[0];

        for(int i = 1 ; i < n ; i++)
        {
                l[i] = max(l[i-1] , p[i] - left);
                left = min(left , p[i]);            
        }
        
        vector<int> r(n,0);
		r[n-1] = 0 ;
		int right = p[n-1];


        for(int j = n-2;  j>=0 ; j--)
        {
                r[j]  = max(r[j+1] ,right - p[j] );
                right = max(right , p[j]);
        }
        
        int total = max(0 , r[0]);
        
        for(int i= 1 ; i <= n-1 ; i++)
        {
            total = max(total , l[i-1]+r[i]);
        }
        
        return total;
    }
};
