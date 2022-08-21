int columnWithMaxZeros(int N)
{
    int column[N];
    int zeros;
    int c, r;
    for(c=0; c<N; c++)
    {
        zeros = 0;
        for(r=0; r<N; r++)
        {
            if(M[r][c] == 0)
                zeros++;
        }
        column[c] = zeros;
    }
    zeros = 0;
    for(c=1; c<N; c++)
    {
        if(column[c] > column[zeros])
            zeros = c;
    }
    return zeros;
}