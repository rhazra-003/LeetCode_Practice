class Solution {
public:
    int minimumNumbers(int num, int k) {
        if (num == 0)
        {
            return 0;
        }
        
        for (int n=1; n<=10 && n*k <= num; ++n)
        {
            if ((num - n*k)%10 == 0)
            {
                return n;
            }
        }
        
        return -1;
    }
};