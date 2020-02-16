#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(void)
{
    double a,b,c;
    double triangle;
    double circle;
    double trapzium;
    double square;
    double rectangle;

    cin>>a>>b>>c;

    triangle=(a*c)/2;
    circle=3.14159*c*c;
    trapzium=c*((a+b)/2);
    square=b*b;
    rectangle=a*b;

    printf("TRIANGULO: %0.3f",triangle);
    cout<<endl;
    printf("CIRCULO: %0.3f",circle);
    cout<<endl;
    printf("TRAPEZIO: %0.3f",trapzium);
    cout<<endl;
    printf("QUADRADO: %0.3f",square);
    cout<<endl;
    printf("RETANGULO: %0.3f",rectangle);
    cout<<endl;
}
