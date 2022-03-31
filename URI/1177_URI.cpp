#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(void)
{
    int i, t,j;

    cin>>t;

    for(i=0;i<1000;)
    {
        for(j=0;j<t&&i<1000;j++)
        {
            printf("N[%d] = %d\n",i,j);
            i++;
        }
    }
}
