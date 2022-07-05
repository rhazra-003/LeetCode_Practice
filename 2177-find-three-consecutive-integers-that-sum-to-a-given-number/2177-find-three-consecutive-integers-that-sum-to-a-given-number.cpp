class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> res;
        
        if(num%3 == 0)
        {           
            res.push_back((num-3)/3);
            res.push_back((num-3)/3 + 1);
            res.push_back((num-3)/3 + 2);
        }
        else
        {
            return res;
        }
        
        return res;
    }
};