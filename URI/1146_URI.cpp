#include<iostream>
using namespace std;
int main(void)
{
    int i,n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=1;i<n;i++)
            printf("%d ",i);
        cout<<i<<endl;
    }
}
