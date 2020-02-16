#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    double a[3];
    cin>>a[0]>>a[1]>>a[2];

    for(int i=0;i<3;i++)
    {
        double temp;
        for(int j=i;j<3;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    double A=a[0]*a[0];
    double B=a[1]*a[1];
    double C=a[2]*a[2];

    if(a[0]>=(a[1]+a[2]))
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else
    {
        if(A==(B+C))
            cout<<"TRIANGULO RETANGULO"<<endl;
        if(A>(B+C))
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(A<(B+C))
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(a[0]==a[1]&&a[0]==a[2])
            cout<<"TRIANGULO EQUILATERO"<<endl;
        else if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2])
           cout<<"TRIANGULO ISOSCELES"<<endl;
    }
}
