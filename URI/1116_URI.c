#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n][2];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i][1]==0)
            printf("divisao impossivel\n");
        else
        {
            printf("%0.1f\n",(float)a[i][0]/(float)a[i][1]);
        }
    }
}
