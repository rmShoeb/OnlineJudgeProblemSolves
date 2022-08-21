/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void printArr(int arr[], int n)
{
    //Your code for printing array here
    int i;
    for(i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<endl;
}
void setToZero(int arr[], int n)
{
   //Use memset to set arr to zero
   int i;
   for(i=0; i<n; i++)
       arr[i] = 0;
}
void xor1ToN(int arr[], int n)
{
   //Xor arr[i]^i
   int i;
   for(i=0; i<n; i++)
       arr[i] = arr[i]^i;
}