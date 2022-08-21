void swapElements(int arr[], int sizeof_array)
{
    int i;
    int temp;
    
    sizeof_array -= 2;
    
    for(i=0; i<sizeof_array; i++)
    {
        temp = arr[i];
        arr[i] = arr[i+2];
        arr[i+2] = temp;
    }
}