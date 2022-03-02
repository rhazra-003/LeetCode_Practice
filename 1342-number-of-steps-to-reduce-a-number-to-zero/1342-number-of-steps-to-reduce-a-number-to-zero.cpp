class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        
        while(num)
        {
            if(num%2)
            {
                --num;
            }
            else
            {
                num >>= 1;
            }
            
            ++ans;
        }
        
        return ans;
    }
};