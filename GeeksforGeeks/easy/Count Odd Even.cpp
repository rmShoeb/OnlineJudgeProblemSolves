void countOddEven(int arr[], int sizeof_array)
{
    int i;
    int odd = 0;
    int even = 0;
    for(i=0; i<sizeof_array; i++)
    {
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
    }
    cout << odd << " " << even << endl;
}