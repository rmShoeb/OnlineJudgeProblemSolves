#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;

int main(void)
{
    unsigned long long int a=0;
    unsigned long long int b=1;
    unsigned long long int c;
    unsigned long long int fib[61];
    vector<unsigned long long int>output;
    vector<int>in;
    int i;
    int test;
    int index;

    for(i=0;i<61;i++)
    {
        fib[i]=a;
        c=a+b;
        a=b;
        b=c;
    }

    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>index;
        in.push_back(index);
        output.push_back(fib[index]);
    }

    for(i=0;i<test;i++)
        printf("Fib(%d) = %lld\n",in[i],output[i]);
}
