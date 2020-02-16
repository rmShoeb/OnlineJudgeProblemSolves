#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(void)
{
    int x;
    int i;

    cin>>x;

    printf("N[0] = %d\n",x);
    for(i=1;i<10;i++)
    {
        x*=2;
        printf("N[%d] = %d\n",i,x);
    }

}
