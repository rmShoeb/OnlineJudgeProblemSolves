#include<iostream>
using namespace std;
int main(void)
{
    int p;
    while(cin>>p)
    {
        if(p==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
            cout<<"Senha Invalida"<<endl;
    }
}
