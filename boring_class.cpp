#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int t;
    int c,r;
    int p;

    cin>>t;

    while(t--)
    {
        cin>>r>>c;
        p=0;
        if((r-1)>0)
        {
            if((c-2)>0)
                p++;
            if((c+2)<=8)
                p++;
        }
        if((r+1)<=8)
        {
            if((c-2)>0)
                p++;
            if((c+2)<=8)
                p++;
        }
        if((r-2)>0)
        {
            if((c-1)>0)
                p++;
            if((c+1)<=8)
                p++;
        }
        if((r+2)<=8)
        {
            if((c-1)>0)
                p++;
            if((c+1)<=8)
                p++;
        }
        cout<<p<<endl;
    }
}
