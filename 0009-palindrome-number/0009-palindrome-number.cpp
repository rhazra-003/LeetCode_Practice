class Solution {
public:
    bool isPalindrome(int x) {
        long int n = 0;
        int num = x;
        
        if(x < 0){
            return false;
        }
        else if (x == 0){
            return true;
        }
        
        while(x > 0){
            int k = x % 10;
            n = (n*10)+k;
            x = x/10;
        }
        
        return (num == n)  ? true : false ;
    }
};