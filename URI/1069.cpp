/**
    editor_rmShoeb
    started_at_2028_1/13/2018
    finished_at_2048_1/13/2018
**/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<stdint.h>
using namespace std;

int main(void)
{
    int n,x,i;
    unsigned long long int output;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        output=pow(2,x);
        output-=1;
        output/=12;
        output/=1000;
        cout<<output<<endl;
    }

    return 0;
}

