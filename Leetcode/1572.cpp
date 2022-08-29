class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int diag_sum{0};
        int num_rows{static_cast<int>(mat.size())};
        
        for(int row=0; row<num_rows; row++)
            diag_sum += (mat[row][row]+mat[row][num_rows-row-1]);
        if(num_rows%2!=0)
            diag_sum -= mat[num_rows/2][num_rows/2];
        
        return diag_sum;
    }
};