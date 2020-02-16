#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(void)
{
    long int k,n,s,p;
    double minimum;
    cin>>k>>n>>s>>p;
    minimum=ceil((double)n/s)*k;
    minimum=ceil(minimum/p);
    cout<<(int)minimum;
}
