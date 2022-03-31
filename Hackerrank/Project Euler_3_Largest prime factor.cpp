#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stdint.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;


bool prime(long int x)
{
    long int p_root,i;
    if(x%2==0&&x!=2)
        return false;
    p_root=sqrt(x);
    for(i=3;i<=p_root;i+=2)
        if(x%i==0)
        return false;
    return true;
}



int main(void)
{
    long int n[10];
    int t,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
        cin>>n[i];
    for(i=0;i<t;i++)
    {
        if(prime(n[i]))
            cout<<n[i]<<endl;
        else
        {
            j=-1;
            vector<int>temp;
            while(n[i]%2==0)
            {
                temp.push_back(2);
                n[i]/=2;
                j++;
            }
            k=3;
            while(1)
            {
                if(prime(n[i]))
                    break;
                else if(prime(k)&&n[i]%k==0)
                {
                    temp.push_back(k);
                    n[i]/=k;
                    j++;
                }
                else
                    k+=2;
            }
            if(n[i]!=1)
            {
                temp.push_back(n[i]);
                j++;
            }
            sort(temp.begin(),temp.end());
            cout<<temp[j]<<endl;
        }
    }
}
