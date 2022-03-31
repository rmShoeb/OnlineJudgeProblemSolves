#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string first, second, third;
    cin>>first>>second>>third;

    if(first=="vertebrado")
    {
        if(second=="ave")
        {
            if(third=="carnivoro")
                cout<<"aguia"<<endl;
            else
                cout<<"pomba"<<endl;
        }
        else
        {
            if(third=="onivoro")
                cout<<"homem"<<endl;
            else
                cout<<"vaca"<<endl;
        }
    }
    else
    {
        if(second=="inseto")
        {
            if(third=="hematofago")
                cout<<"pulga"<<endl;
            else
                cout<<"lagarta"<<endl;
        }
        else
        {
            if(third=="hematofago")
                cout<<"sanguessuga"<<endl;
            else
                cout<<"minhoca"<<endl;
        }
    }
}
