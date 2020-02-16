#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main(void)
{
    int n;
    long int i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        printf("%ld %ld %ld\n",i,i*i,i*i*i);
        printf("%ld %ld %ld\n",i,(i*i)+1,(i*i*i)+1);
    }
}
