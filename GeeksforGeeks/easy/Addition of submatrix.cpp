// this problem is tagged as Amazon in problemset
class Solution{
public:

	long long subMatrixSum(vector<int> arr[], int n, int m, int x1, int y1, int x2,
	                       int y2) {
	    long long sub_matrix_sum{0};
	    
	    for(int r=x1-1; r<x2; r++){
	        for(int c=y1-1; c<y2; c++)
	            sub_matrix_sum += arr[r][c];
	    }
	    
	    return sub_matrix_sum;
	}

};