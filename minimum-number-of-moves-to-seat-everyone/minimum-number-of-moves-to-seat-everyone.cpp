class Solution {
public:
    int minMovesToSeat(vector<int>& A, vector<int>& B) {
        int mov = 0;
        
        sort(begin(A), end(A));
        sort(begin(B), end(B));

        for (int i = 0; i < A.size(); ++i) {
            mov += abs(A[i] - B[i]);
        }
        return mov;
    }
};