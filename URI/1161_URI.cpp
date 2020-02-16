#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    int m,n;
    int i;
    unsigned long long int factm,factn;
    while((cin>>m>>n)!='\0')
    {
        factm=factn=1;
        for(i=2;i<=m;i++)
            factm*=i;
        for(i=2;i<=n;i++)
            factn*=i;
        cout<<factm+factn<<endl;
    }
}
