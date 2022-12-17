#include <iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(void)
{
    vector<long long int>a;
    int n,i,pos=1;
    double mean=0;
    double temp;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
        mean+=temp;
    }
    mean/=n;
    temp=abs(a[0]-mean);
    for(i=1;i<n;i++)
    {
        if(temp>abs(mean-a[i]))
        {
            temp=abs(mean-a[i]);
            pos=i+1;
        }
    }
    cout<<pos;
}