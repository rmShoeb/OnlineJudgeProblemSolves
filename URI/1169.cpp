/**
    editor_rmShoeb
    stated_at_0008_2/23/2018
    finished_at_0025_2/23/2018
**/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<stdint.h>
using namespace std;

int main(void)
{
    int n,x;
    int i;
    long long int grain;
    long long int weight;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        grain=((pow(2,x))-1)/12000;
        //weight=grain/12000;
        //cout<<weight;
        cout<<grain;
        printf(" kg\n");
    }
}
