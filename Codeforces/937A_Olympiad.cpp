#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int a[n];
    int i;
    int way=1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-2;i>=0;i--)
    {
        if((a[i]!=a[i+1])&&a[i]!=0)
            way++;
    }
    cout<<way<<endl;
}
