#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int n;
    int i,j,k,temp;
    unsigned long long int a[3];

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        for(j=0;j<3;j++)
        {
            for(k=j;k<3;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        a[0]*=a[0];
        a[1]*=a[1];
        a[2]*=a[2];
        if((a[0]+a[1])==a[2])
            printf("Case %d: yes\n",i+1);
        else
            printf("Case %d: no\n",i+1);
    }
}
