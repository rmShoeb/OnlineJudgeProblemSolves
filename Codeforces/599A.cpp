#include<iostream>
using namespace std;
 
int main(void)
{
    unsigned long long int d[3];
    unsigned long long int way1,way2;
    unsigned long long int temp;
    cin>>d[0]>>d[1]>>d[2];
    if(d[0]>d[2])
    {
        temp=d[2];
        d[2]=d[0];
        d[0]=temp;
    }
    if(d[1]>d[2])
    {
        temp=d[2];
        d[2]=d[1];
        d[1]=temp;
    }
    way1=(2*d[0])+(2*d[1]);
    way2=d[0]+d[1]+d[2];
    if(way1<way2)
        cout<<way1;
    else
        cout<<way2;
}