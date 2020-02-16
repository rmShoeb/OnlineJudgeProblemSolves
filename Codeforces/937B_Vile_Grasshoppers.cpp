///unsolved
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<stdint.h>
using namespace std;

int main(void)
{
    long long int p,y;
    long long int height;
    long long int i;
    cin>>p>>y;

    if(p%2==0)
    {
        if(y%2!=0)
            height=y;
        else
            height=y-1;
    }
    else
    {
        if(y%2!=0&&y%p!=0)
            height=y;
        else if(y%2!=0)
        {
            for(i=y;;i-=2)
            {
                if(i%p!=0)
                {
                    height=i;
                    break;
                }
                else
                    height=-1;
            }
        }
        else
        {
            for(i=y-1;;i-=2)
            {
                if(i%p!=0)
                {
                    height=i;
                    break;
                }
                else
                    height=-1;
            }
        }
    }
    if(height==1)
        height=-1;

    cout<<height<<endl;
}
