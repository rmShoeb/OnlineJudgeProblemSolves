#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int i,j;
    int a[n];
    int temp[n]={0};

    for(i=0;i<n;i++)
        cin>>a[i];

    j=0;
    for(i=1;i<n;i++)
    {
        if(a[j]>a[i])
        {
            temp[j]++;
        }
        else
        {
            temp[i]++;
            j=i;
        }
    }

    for(i=0;i<n;i++)
        cout<<temp[i]<<" ";
}
