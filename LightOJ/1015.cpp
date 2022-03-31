#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int t;
    int n;
    int i,j;
    int dustin;
    int dustall;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        dustall=0;
        for(j=0;j<n;j++)
        {
            cin>>dustin;
            if(dustin>0)
                dustall+=dustin;
        }

        printf("Case %d: %d\n",i+1,dustall);
    }
}
