int countSumSubsets(int arr[], int N)
{
    unsigned int pow_set_size = pow(2, N); 
    int counter, j;
    int sum;
    int even_sum = 0;

    for(counter=1; counter<pow_set_size; counter++) 
    {
        sum = 0;
        for(j=0; j<N; j++) 
        {
            if(counter & (1<<j))
                sum += arr[j];
        }
        if(sum%2 == 0)
            even_sum++;
    }
    
    return even_sum;
}