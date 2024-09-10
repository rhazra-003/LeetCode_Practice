class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> digits;
        int l = 1, sum = 0; 

        while(n) {
            digits.push_back(n%10);
            n=n/10;
        } 
     
        for(int i=digits.size()-1; i>=0; i--) {
            sum += digits[i]*l;
            l = l*(-1);
        }
        
        return sum;
    }
};