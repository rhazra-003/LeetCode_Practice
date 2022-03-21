class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
	    int i = 0, mn = INT_MAX, ans = -1, manhattan;
	    
        for(auto& pt : points)
	        if(++i && (pt[0] == x || pt[1] == y) && (manhattan = abs(x - pt[0]) + abs(y - pt[1])) < mn) 
            {
                mn = manhattan;
                ans = i - 1;
            }
        
	    return ans;
    }
};