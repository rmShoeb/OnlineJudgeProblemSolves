vector<vector<int>> transpose(int a[][M], int n)
{
    vector<vector<int>> t(n);
    
    for(int col=0; col<n; col++){
        for(int row=0; row<n; row++)
            t[col].push_back(a[row][col]);
    }
    
    return t;
}