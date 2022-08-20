#include<iostream>
using namespace std;

int main(void)
{
    int l,b,peri;
    long int area;
    cin>>l>>b;
    peri=2*(l+b);
    area=(l*b);
    if(peri>area)
        cout<<"Peri\n"<<peri<<endl;
    else
        cout<<"Area\n"<<area<<endl;
}
