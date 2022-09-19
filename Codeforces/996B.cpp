#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    long int n;
    vector<long long int>a;
    long long int temp;
    long int i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    temp=0;
    for(i=0;i<n;i++)
    {
        if(temp>=a[i])
            break;
        temp++;
    }
    i++;
    i%=n;
    if(i==0)
        i=n;
    cout<<i;
}
