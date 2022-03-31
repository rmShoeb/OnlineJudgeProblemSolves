#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    int T;
    int a,b;
    vector<int>sum;
    int i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>a>>b;
        sum.push_back(a+b);
    }
    for(i=0;i<T;i++)
    {
        cout<<"Case "<<i+1<<": "<<sum[i]<<endl;
    }
}
