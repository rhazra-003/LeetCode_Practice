class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        
        int z = 0;
        while (x > z)
        {
            z = z * 10 +  x % 10;
            
            x = floor(x/10);
        }
            
        return x == z || x == floor(z / 10);
    }
};