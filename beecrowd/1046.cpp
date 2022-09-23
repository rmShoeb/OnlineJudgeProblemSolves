#include<iostream>
using namespace std;

int main(void)
{
    int start, stop;
    cin>>start>>stop;

    if(start==stop)
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    else if(start>stop)
        cout<<"O JOGO DUROU "<<((24-start)+stop)<<" HORA(S)"<<endl;
    else
        cout<<"O JOGO DUROU "<<(stop-start)<<" HORA(S)"<<endl;
}
