#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<stdint.h>

using namespace std;

int main(void)
{
    long int n;
    long int temp,i;
    long int number_of_divisible;
    long int a0=0;
    long int a1=0;
    long int a2=0;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp%3==0)
            a0++;
        else if(temp%3==1)
            a1++;
        else
            a2++;
    }
    
    number_of_divisible=((a0-1)*a0)/2;
    number_of_divisible+=(a1*a2);
    
    cout<<number_of_divisible<<endl;
    return 0;
}