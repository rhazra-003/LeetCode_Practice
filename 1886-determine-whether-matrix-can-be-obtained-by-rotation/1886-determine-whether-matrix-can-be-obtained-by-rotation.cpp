class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target)
        {
            return true;
        }
        
        int degree = 3;
        
        while(degree--)
        {
            for(int i=0; i<mat.size(); i++)
            {
                // transpose of the given matrix
                for(int j=i+1; j<mat.size(); j++)
                {
                    swap(mat[i][j], mat[j][i]);
                }
                // reverse the rows
                reverse(mat[i].begin(), mat[i].end());
            }
            
            if(mat == target) 
            {
                return true;
            }
        }
        
        return false;
    }
};