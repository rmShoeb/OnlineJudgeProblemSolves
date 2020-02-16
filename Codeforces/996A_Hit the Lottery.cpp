#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
    long long int input;
    long long int output=0;
    cin>>input;
    output+=(input/100);
    input%=100;
    output+=(input/20);
    input%=20;
    output+=(input/10);
    input%=10;
    output+=(input/5);
    input%=5;
    output+=(input/1);
    cout<<output;
}
