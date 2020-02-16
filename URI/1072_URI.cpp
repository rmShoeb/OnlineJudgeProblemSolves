#include<iostream>
using namespace std;
int main(void)
{
    long long int x;
    int n, in=0, out=0;
    cin>>n;

    int i;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>=10&&x<=20)
            in++;
        else
            out++;
    }

    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}
