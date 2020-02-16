#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,j,n,temp;
    int b=0;
    int c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    i=0;
    while(a[i]>=0&&i<n)
    {
        b+=a[i];
        i++;
    }
    while(i<n)
    {
        c+=a[i];
        i++;
    }
    cout<<(b-c);
}
