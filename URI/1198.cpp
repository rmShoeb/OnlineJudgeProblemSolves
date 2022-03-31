/**
    editor_rmShoeb
    started_at_1855_1/13/2018
    finished_at_1900_1/13/2018
**/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    long long int a,b;

    while((scanf("%lld %lld",&a,&b))!=EOF)
    {
        if(a>b)
            printf("%lld\n",a-b);
        else
            printf("%lld\n",b-a);
    }

    return 0;
}
