#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(void)
{
    int x, h,m;
    int iter=0;

    cin>>x>>h>>m;

    while(1)
    {
        if((h/10==7)||(h%10==7)||(m/10==7)||(m%10==7))
            break;
        else
        {
            m-=x;
            iter++;
            if(m<0)
            {
                m+=60;
                h--;
            }
            if(h<0)
                h+=24;
        }
    }

    cout<<iter<<endl;
}
