#include<iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    int temp;
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    int i;
    for(i=x+1;i<y;i++)
    {
        if(i%5==2||i%5==3)
            cout<<i<<endl;
    }
}
