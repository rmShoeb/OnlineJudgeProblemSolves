#include<iostream>
using namespace std;

int main(void)
{
    int n;
    int i;
    long fact=1;

    cin>>n;

    for(i=2;i<=n;i++)
        fact*=i;

    cout<<fact<<endl;
}
