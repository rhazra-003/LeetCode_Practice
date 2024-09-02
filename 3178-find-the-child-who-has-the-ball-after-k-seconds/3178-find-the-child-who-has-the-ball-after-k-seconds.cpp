class Solution {
public:
    int numberOfChild(int n, int k) {
        long remain = k%(n-1);
        
        if((k/(n-1))%2 == 0){
            return remain;
        } else {
            return n - remain - 1;
        }
    }
};