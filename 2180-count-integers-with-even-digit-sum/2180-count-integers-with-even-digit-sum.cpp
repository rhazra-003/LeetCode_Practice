class Solution {
public:
    int countEven(int num) {
        int temp = num, sum = 0;
        
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
            
        if(sum%2 == 0)
        {
            return temp/2;
        }
        else
        {
            return (temp-1)/2;
        }
        
        return 0;
    }
};