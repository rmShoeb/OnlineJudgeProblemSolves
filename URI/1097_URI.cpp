#include<iostream>
using namespace std;
int main(void)
{
    int i;
    int j=7;
    int temp=0;

    for(i=1;i<=9;i+=2)
    {
        while(temp<3)
        {
            cout<<"I="<<i<<" J="<<j<<endl;
            temp++;
            j--;
        }
        temp=0;
        j+=5;
    }
}
