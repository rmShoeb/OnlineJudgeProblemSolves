#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    long long int arr[n];
    int i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
            cout<<"NULL"<<endl;
        else if(arr[i]>0)
        {
            if(arr[i]%2==0)
                cout<<"EVEN POSITIVE"<<endl;
            else
                cout<<"ODD POSITIVE"<<endl;
        }
        else
        {
            if(arr[i]%2==0)
                cout<<"EVEN NEGATIVE"<<endl;
            else
                cout<<"ODD NEGATIVE"<<endl;
        }
    }
}
