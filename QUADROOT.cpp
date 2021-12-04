#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    temp=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<temp<<endl;
    temp=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<temp<<endl;
}
