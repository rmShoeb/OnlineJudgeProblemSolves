#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    string name;
    double salary, sale,total;

    cin>>name>>salary>>sale;

    total=(sale*0.15)+salary;

    printf("TOTAL = R$ %0.2f",total);
    cout<<endl;
}
