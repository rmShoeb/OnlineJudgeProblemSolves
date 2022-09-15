#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(void)
{
    int n;
    int i=2;
    int t1=1;
    int t2=0;
    int j;
    char team1[12];
    char team2[12];
    char hudai[12];
 
    scanf("%d",&n);
    scanf("%s",team1);
    while(i<=n)
    {
        scanf("%s",hudai);
        if(strcmp(hudai,team1))
        {
            for(j=0;hudai[j]!='\0';j++)
                team2[j]=hudai[j];
            team2[j]=hudai[j];
            t2++;
        }
        else
            t1++;
        i++;
    }
 
    if(t1>t2)
        printf("%s\n",team1);
    else
        printf("%s\n",team2);
 
    return 0;
}