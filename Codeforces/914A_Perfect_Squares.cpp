#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(void)
{
    int n;
    long int temp_in;
    long int temp_cal;
    long int n_perfect;

    cin>>n;
    while(n)
    {
        --n;
        cin>>temp_in;
        if(temp_in>=0)
        {
            temp_cal=(int)sqrt(temp_in);
            if(temp_cal*temp_cal!=temp_in)
            {
                n_perfect=temp_in;
                break;
            }
        }
        else
        {
            n_perfect=temp_in;
            break;
        }
    }
    while(n)
    {
        cin>>temp_in;
        if(temp_in>=0)
        {
            temp_cal=(int)sqrt(temp_in);
            if(temp_cal*temp_cal!=temp_in)
            {
                if(temp_in>n_perfect)
                    n_perfect=temp_in;
            }
        }
        else
        {
            if(temp_in>n_perfect)
                n_perfect=temp_in;
        }
        --n;
    }

    cout<<n_perfect<<endl;
}
