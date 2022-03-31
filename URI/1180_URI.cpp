#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
using namespace std;

int main(void)
{
    int n;
    int temp;
    int low;
    int pos;

    cin>>n;
    cin>>temp;

    low=temp;
    pos=0;
    for(int i=1;i<n;i++)
    {
        cin>>temp;
        if(temp<low)
        {
            low=temp;
            pos=i;
        }
    }

    cout<<"Menor valor: "<<low<<endl;
    cout<<"Posicao: "<<pos<<endl;
}
