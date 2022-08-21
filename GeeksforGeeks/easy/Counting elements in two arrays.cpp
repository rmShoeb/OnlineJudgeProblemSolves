void countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
{
    int i, j;
    int count;
    
    for(i=0; i<m; i++)
    {
        count = 0;
        for(j=0; j<n; j++)
        {
            if(arr2[j] <= arr1[i])
                count++;
        }
        cout << count << " ";
    }
}