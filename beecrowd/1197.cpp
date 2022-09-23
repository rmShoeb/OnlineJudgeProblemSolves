#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctype.h>
using namespace std;
int main(void)
{
    int v,t;
    double a,s;
    while(scanf("%d %d",&v,&t)!=EOF)
    {
        if(t==0)
            s=0;
        else
        {
            a=v/(double)t;
            s=(a*t*t*4)/2;
        }
        if(s<0)
            s*=(-1);
        cout<<s<<endl;
    }
}
