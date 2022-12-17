#include <iostream>

using namespace std;

int main(void)
{
    long long int input;
    cin>>input;
    input%=10;
    if(input==0)
        cout<<4;
    else
    {
        input%=3;
        if(input==0)
            cout<<3;
        else
            cout<<input;
    }
    return 0;
}