/**
    editor_rmShoeb
    started_at_2028_1/13/2018
    finished_at_
**/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(void)
{
    int n,x,i;
    unsigned long long int output;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        output=pow(2,x);
        output/=12;
        output/=1000;
        printf("%llu\n",output);
    }

    return 0;
}
