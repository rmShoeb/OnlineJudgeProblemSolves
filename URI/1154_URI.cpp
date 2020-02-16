#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(void)
{
    int  x;
    int cnt=0;
    int sum=0;

    while(cin>>x)
    {
        if(x<0)
            break;
        sum+=x;
        cnt++;
    }

    printf("%0.2f",(double)sum/cnt);
    cout<<endl;
}
