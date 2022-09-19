#include<iostream>
using namespace std;

int main(void)
{
    int n,i,temp,marks;
    int john=0;
    int position=1;

    cin>>n;
    for(i=0;i<4;i++)
    {
        cin>>temp;
        john+=temp;
    }
    n--;
    while(n--)
    {
        marks=0;
        for(i=0;i<4;i++)
        {
            cin>>temp;
            marks+=temp;
        }
        if(marks>john)
            position++;
    }

    cout<<position;
}
