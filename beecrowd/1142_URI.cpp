#include<iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    int i,j=1;
    int cnt;
    for(i=0;i<x;i++)
    {
        for(cnt=0;cnt<3;cnt++)
        {
            printf("%d ",j);
            j++;
        }
        j++;
        cout<<"PUM"<<endl;
    }
}
