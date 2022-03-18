class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, total = 0;
        
		for (; n>0; n/=10) 
        {
            total += n % 10;
            product *= n % 10;
        }
        
		return product-total;
    }
};