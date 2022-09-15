#include<iostream>
using namespace std;
 
int main(void)
{
    int n,h;
    int i;
    int width;
    cin>>n>>h;
    int temp;
    width=n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>h)
            width++;
    }
    cout<<width;
}