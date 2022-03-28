class Solution {
public:
    vector<int> rearrangeArray(vector<int>& n) {
        vector<int> res;
        for (int i = 0, j = 0; max(i, j) < n.size(); ) 
        {
            while (n[i++] < 0);
            while (n[j++] > 0);
            
            res.insert(end(res), {n[i - 1], n[j - 1]});
        }
        
        return res;
    }  
};