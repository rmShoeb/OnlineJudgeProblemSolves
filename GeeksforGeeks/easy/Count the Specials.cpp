int countSpecials(int arr[], int sizeof_array, int K)
{
    int f = floor(sizeof_array/K), count = 0;
    int i, j;
    int hash_index;
    int repeat;
    int hash[1000][1000] = {0};

    for(i=0; i<sizeof_array; i++)
    {
        hash_index = arr[i]%1000;
        j = 0;
        while(hash[hash_index][j] != 0)
            j++;
        hash[hash_index][j] = arr[i];
    }
    for(i=0; i<1000; i++)
    {
        j = 0;
        while(hash[i][j] != 0)
            j++;
        if(j == f)
            count++;
    }
    return count;
}
