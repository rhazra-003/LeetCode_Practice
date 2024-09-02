class Solution {
public:
    int passThePillow(int n, int time) {
        long remain = time%(n-1);
        
        if((time/(n-1))%2 == 0){
            return remain + 1;
        } else {
            return n - remain;
        }
        
    }
};