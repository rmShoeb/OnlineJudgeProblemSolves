#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<stdint.h>
#include<ctype.h>
#include<cstring>
using namespace std;

int main(void)
{
    int t,i,j;
    char input[15];
    int len,flag;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        //gets(input);
        scanf(" %s",input);
        len=strlen(input);
        for(j=0;j<(len/2);j++)
        {
            if(input[j]!=input[len-j-1])
            {
                flag=1;
                printf("Case %d: No\n",i);
                break;
            }
        }
        if(flag==0)
            printf("Case %d: Yes\n",i);
    }
    return 0;
}
