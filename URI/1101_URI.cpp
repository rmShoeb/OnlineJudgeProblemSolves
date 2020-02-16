#include<iostream>
using namespace std;
int main(void)
{
    int m,n;
    int i;
    int sum;
    int temp;
    while(cin>>m>>n)
    {
        if(m>0&&n>0)
        {
            sum=0;
            if(m>n)
            {
                temp=m;
                m=n;
                n=temp;
            }
            for(i=m;i<=n;i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            cout<<"Sum="<<sum<<endl;
        }
        else
            break;
    }
}
