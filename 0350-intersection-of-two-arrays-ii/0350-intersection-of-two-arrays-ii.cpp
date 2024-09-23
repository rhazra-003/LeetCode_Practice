class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        sort(num1.begin(), num1.end());
        sort(num2.begin(), num2.end());

        num1.erase(set_intersection(num1.begin(), num1.end(), num2.begin(), num2.end(), num1.begin()), num1.end());
        
        return num1;
    }
};