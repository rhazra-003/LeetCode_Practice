class Solution {
public:
    int reverse(int x) {
        long int n = 0;
        
        while(x!=0){
            int k = x % 10;
            n = (n*10)+k;
            x = x/10;
        }
        
        if(n>INT_MAX || n<INT_MIN){
            return 0;
        }
    
        return n; 
    }
};