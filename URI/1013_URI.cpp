#include<iostream>
#include<cstdio>

using namespace std;
int main(void)
{
    int a[3];
    int maximum=0;

    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        if(a[i]>maximum)
            maximum=a[i];
    }

    cout<<maximum<<" eh o maior"<<endl;
}
