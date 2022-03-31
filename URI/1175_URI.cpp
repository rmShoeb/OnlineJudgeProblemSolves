#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(void)
{
    int a[20];
    int i;

    for(i=0;i<20;i++)
        cin>>a[i];

    for(i=0;i<20;i++)
        printf("N[%d] = %d\n",i,a[20-i-1]);
}
