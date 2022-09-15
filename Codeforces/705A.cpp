#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(void)
{
    int n;
    int i;
    int hudai=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"I ";
        if(i%2==0)
            cout<<"love ";
        else
            cout<<"hate ";
        if(i==n)
            cout<<"it"<<endl;
        else
            cout<<"that ";
    }
}
