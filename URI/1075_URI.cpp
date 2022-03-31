#include<iostream>
using namespace std;
int main(void)
{
    int n;
    int i=0;
    cin>>n;

    while(((n*i)+2)<=10000)
    {
        cout<<(n*i)+2<<endl;
        i++;
    }
}
