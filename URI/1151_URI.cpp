#include<iostream>
using namespace std;

int main(void)
{
    int a=0;
    int b=1;
    int c;
    int n;
    int i;

    cin>>n;

    for(i=1;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    cout<<a<<endl;
}
