#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int p,t;
    cin>>n;
    int i;
    double min;
    double temp;
    cin>>p>>t;
    min=t/(double)p;
    i=1;
    for(int j=1;j<n;j++)
    {
        cin>>p>>t;
        temp=t/(double)p;
        if(temp<min)
        {
            min=temp;
            i=j+1;
        }
    }
    cout<<i;
}