#include<iostream>
using namespace std;
int cl(int baal);
unsigned long long int m,n,a,x,y,total;

int cl(int baal, int hudai)
{
    if(baal%hudai==0)
        return baal/hudai;
    else
        return (baal/hudai)+1;
}
int main(void)
{
    cin>>m;
    cin>>n;
    cin>>a;

    x=cl(m,a);
    y=cl(n,a);
    total=x*y;

    cout<<total<<endl;

    return 0;
}
