class Solution {
public:
    void findNums(vector<int>& ca, int tar, vector<vector<int>> & res, vector<int> & r, int i){
        if (tar == 0) 
        {
            res.push_back(r);
            return;
        }
 
        while (i < ca.size() && tar - ca[i] >= 0) 
        {
            r.push_back(ca[i]);
            
            findNums(ca, tar - ca[i], res, r, i);
            i++;
 
            r.pop_back();
        }
}
    
    vector<vector<int>> combinationSum(vector<int>& ca, int tar) {
        sort(ca.begin(), ca.end());
 
        ca.erase(unique(ca.begin(), ca.end()), ca.end());

        vector<int> r;
        vector<vector<int> > res;
        
        findNums(ca, tar, res, r, 0);

        return res;
    }
};