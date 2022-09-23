#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(void)
{
    double a,b,c;

    cin>>a>>b>>c;

    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        printf("Perimetro = %0.1f",a+b+c);
        cout<<endl;
    }
    else
    {
        double area;
        area=c*((a+b)/2);

        printf("Area = %0.1f",area);
        cout<<endl;
    }
}
