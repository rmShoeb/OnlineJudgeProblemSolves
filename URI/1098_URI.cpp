#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
    double i,j;
    for(i=0;i<=2;i+=0.2)
    {
        for(j=1;j<=3;j++)
        {
            if(i==0||i==1||i==2)
            {
                cout<<"I="<<i<<" J="<<i+j<<endl;
                /*printf("I=%d J=%d",(int)i,(int)i+j);
                cout<<endl;*/
            }
            else
            {
                printf("I=%0.1f J=%0.1f",i,i+j);
                cout<<endl;
            }
        }
    }
}
