#include <iostream>

using namespace std;

int main(void)
{
    long long int a,b,temp;
    
    cin>>a>>b;
    
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    
    while(1)
    {
        if(a%b==0)
        break;
        
        else
        {
            temp=a%b;
            a=b;
            b=temp;
        }
    }
    
    cout<<b;
    
    return 0;
}