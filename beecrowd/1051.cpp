/**
    editor_rmShoeb
    stated_at_2256_2/22/2018
    finished_at_2315_2/22/2018
**/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
using namespace std;

int main(void)
{
    double income;
    double temp;
    double tax=0;

    cin>>income;

    if(income>2000)
    {
        if(income>3000)
        {
            if(income>4500)
            {
                temp=income-4500;
                tax+=(temp*0.28);
                tax+=((1500*0.18)+(1000*0.08));
            }
            else
            {
                temp=income-3000;
                tax+=(temp*0.18);
                tax+=(1000*0.08);
            }
        }
        else
        {
            temp=income-2000;
            tax+=(temp*0.08);
        }
        printf("R$ %0.2f\n",tax);
    }
    else
        cout<<"Isento"<<endl;
}
