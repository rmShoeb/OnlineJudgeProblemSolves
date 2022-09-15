#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a[n][3];
    int i, j,k=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        int ck=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
    ck++;
}
        if(ck>1)
k++;
    }
    cout<<k;
}