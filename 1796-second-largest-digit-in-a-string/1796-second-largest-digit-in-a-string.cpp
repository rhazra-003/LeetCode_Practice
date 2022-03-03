class Solution {
public:
	int secondHighest(string s) {
		int max1 = -1, max2 = -1;
        
		for(int i=0; i<s.size(); i++)
        {
			if(s[i] >= '0' and s[i] <= '9')
            {
				int t = s[i] - '0';
				if(t > max1)
                {
					max2 = max1;
					max1 = t;
				}
				else if(t > max2 and t != max1)
                {
					max2 = t;
				}
			}
		}
        
		if(max1 != max2)
        {
			return max2;
		}
		
        return -1;
	}
};