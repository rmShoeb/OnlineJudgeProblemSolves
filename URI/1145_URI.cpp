#include<iostream>
using namespace std;
int main(void)
{
    int x,j;
    long int y,i;
    cin>>x>>y;
    for(i=1;i<=y;)
    {
        for(j=1;j<x;j++)
        {
            printf("%d ",i);
            i++;
        }
        printf("%d\n",i);
        i++;
    }
}
