/**
    editor_rmShoeb
    started_at_1934_1/13/2018
    finished_at_1939_1/13/2018
    modified_at_2200_2/22/2018
**/
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<stdint.h>
#include<ctime>
using namespace std;

int main(void)
{
    int i,n;
    int temp;

    scanf("%d",&n);
    n++;

    for(i=2;i<n;i+=2)
    {
        temp=i*i;
        printf("%d^2 = %d\n",i,temp);
    }

    return 0;
}


