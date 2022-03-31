#include<iostream>
using namespace std;
int main(void)
{
    int check;
    int alcohol=0;
    int gasoline=0;
    int diesel=0;

    while(cin>>check)
    {
        if(check==1)
            alcohol++;
        else if(check==2)
            gasoline++;
        else if(check==3)
            diesel++;
        else if(check==4)
            break;
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcohol<<endl;
    cout<<"Gasolina: "<<gasoline<<endl;
    cout<<"Diesel: "<<diesel<<endl;
}
