class Solution {
public:
    vector<int> closestDivisors(int num) {
        vector<int> r1 = findDivisor(num + 1);
        vector<int> r2 = findDivisor(num + 2);
        
        if (abs(r1[0] - r1[1]) < abs(r2[0] - r2[1]))
        {
            return r1;
        }
        
        return r2;
    }
 
private:
    vector<int> findDivisor(int num) {
        vector<int> r = {1, num};
        
        for (int i = 2; i * i <= num; ++ i)
        {
            if (num % i == 0) 
            {
                r = {i, num/i};
            }
        }
        
        return r;
    }
};