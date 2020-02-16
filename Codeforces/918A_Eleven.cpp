#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(void)
{
    int n;
    int a=1;
    int b=1;
    int temp;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i==a)
        {
            printf("O");
            temp=a+b;
            b=a;
            a=temp;
        }
        else
            printf("o");
    }
}
