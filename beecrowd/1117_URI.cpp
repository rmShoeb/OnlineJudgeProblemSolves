#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
    double mark, total;
    int cnt=0;
    total=0;
    while(cin>>mark)
    {
        if(mark>=0&&mark<=10)
        {
            total+=mark;
            cnt++;
        }
        else
            cout<<"nota invalida"<<endl;
        if(cnt==2)
            break;
    }
    total/=2;
    cout<<"media = "<<total<<endl;
    //printf()
}
