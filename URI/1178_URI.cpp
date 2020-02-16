#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(void)
{
    double t;
    int i;

    cin>>t;

    for(i=0;i<100;i++)
    {
        printf("N[%d] = %0.4f\n",i,t);
        t/=2;
    }
}
