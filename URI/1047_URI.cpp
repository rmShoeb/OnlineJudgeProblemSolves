#include<iostream>
using namespace std;

int main(void)
{
    int starth, startm, endh, endm, timeh, timem;
    cin>>starth>>startm>>endh>>endm;
    ///hour calculation
    if(starth==endh)
        timeh=24;
    else if(starth<endh)
        timeh=endh-starth;
    else
        timeh=(24-starth)+endh;
    ///miniute calculation
    if(startm==endm)
        timem=0;
    else if(startm<endm)
        timem=endm-startm;
    else
    {
        timem=(endm+60)-startm;
        timeh--;
    }

    if(timeh>=24&&timem>0)
        timeh-=24;
    cout<<"O JOGO DUROU "<<timeh<<" HORA(S) E "<<timem<<" MINUTO(S)"<<endl;
}
