class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        
        int l = 0, r = citations.size()-1, mid;
        
        while(l <= r)
        {
            mid = l + (r-l)/2;
            
            if(citations[mid] < citations.size()-mid)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        
        return citations.size() - l;
    }
};