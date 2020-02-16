#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(void)
{
    int n,i,j,cnt;
    double x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        cnt=0;
        while(x>1)
        {
            x/=2;
            cnt++;
        }
        printf("%d dias\n",cnt);
    }
}
