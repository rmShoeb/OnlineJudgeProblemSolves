#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int x,z;
    int cnt=0;
    int sum=0;
    int i;

    cin>>x>>z;
    while(x>=z)
        cin>>z;

    for(i=x;z>sum;i++)
    {
        sum+=i;
        cnt++;
    }

    cout<<cnt<<endl;
}
