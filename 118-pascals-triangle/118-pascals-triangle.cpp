class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> r(numRows); // n number of columns

        for (int i = 0; i < numRows; i++) // traversal in row
        {
            r[i].resize(i + 1); // resized to increase as number of columns is equal to number of row
            r[i][0] = r[i][i] = 1; // default 1's in extrems
  
            for (int j = 1; j < i; j++) // traversal in column
            {
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j]; // 1+2=3 or 1+3=4
            }
        }
        
        return r; // return of triangle
    }
};