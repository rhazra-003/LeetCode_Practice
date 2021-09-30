class Solution {
public:
    int fib(int n) {
        int d;
        
        if(n==0||n==1){
            return n;
        }
        
        d=fib(n-1)+fib(n-2);
        
        return d;
    }
};
