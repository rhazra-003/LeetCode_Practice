class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res;
        
        if(m*n != original.size()){
            return {};
        }
        
        for (int i = 0; i < m*n; i += n){
            res.push_back(vector<int>(original.begin()+i, original.begin()+i+n));
        }
        
        return res;
    }
};