#include<iostream>
using namespace std;
int main(void)
{
    int x,y,i,sum=0;
    int temp;
    cin>>x>>y;
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    for(i=x;i<=y;i++)
    {
        if(i%13==0)
            continue;
        else
            sum+=i;
    }
    cout<<sum<<endl;
}
