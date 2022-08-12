class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {     
        for(int i=0; i<matrix.size(); i++)
        {
            // transpose of the given matrix
            for(int j=i+1; j<matrix.size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
            // reverse the rows
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};