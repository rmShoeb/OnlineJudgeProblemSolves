#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class URI
{
public:
    int x;
    int y;
};

int main(void)
{
    int n;
    int i,j;
    int temp;
    cin>>n;

    URI data[n];
    for(i=0;i<n;i++)
    {
        cin>>data[i].x>>data[i].y;
        if(data[i].x>data[i].y)
        {
            temp=data[i].x;
            data[i].x=data[i].y;
            data[i].y=temp;
        }
    }

    for(i=0;i<n;i++)
    {
        temp=0;
        if(data[i].x%2==0)
        {
            for(j=data[i].x+1;j<data[i].y;j+=2)
                temp+=j;
        }
        else
        {
            for(j=data[i].x+2;j<data[i].y;j+=2)
                temp+=j;
        }
        cout<<temp<<endl;
    }
}
