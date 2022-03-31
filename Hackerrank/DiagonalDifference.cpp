#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;

    int arr[n][n];
    int i,j;
    int sum1=0;
    int sum2=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>arr[i][i];
    }

    for(i=0;i<n;i++)
        sum1+=arr[i][i];
    for(i=0,j=n-1;i<n;i++)
    {
        sum2+=arr[i][j];
        //cout<<arr[i][j]<<endl;
        //cout<<i<<" "<<j<<endl;
        j--;
    }

    if(sum1>sum2)
        cout<<(sum1-sum2)<<endl;
    else
        cout<<(sum2-sum1)<<endl;
}
