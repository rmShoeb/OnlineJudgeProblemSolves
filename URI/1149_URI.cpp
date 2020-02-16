#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int a,n;
    int sum=0;

    cin>>a>>n;
    while(n<1)
        cin>>n;

    for(int i=0;i<n;i++)
    {
        sum+=a;
        a++;
    }

    cout<<sum<<endl;
}
