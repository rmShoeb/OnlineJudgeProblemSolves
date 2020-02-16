#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int arr[10];
    int i;

    for(i=0;i<10;i++)
        cin>>arr[i];

    for(i=0;i<10;i++)
    {
        if(arr[i]<1)
            arr[i]=1;
    }

    for(i=0;i<10;i++)
        printf("X[%d] = %d\n",i,arr[i]);
}
