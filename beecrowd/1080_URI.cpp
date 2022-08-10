/**
    editor_rmShoeb
    started_at_1923_1/13/2018
    finished_at_1930_1/13/2018
**/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,pos;
    long long int temp, maX;

    scanf("%lld",&maX);
    pos=1;
    for(i=1;i<100;i++)
    {
        scanf("%lld",&temp);
        if(temp>maX)
        {
            maX=temp;
            pos=i+1;
        }
    }

    printf("%lld\n%d\n",maX,pos);

    return 0;
}
