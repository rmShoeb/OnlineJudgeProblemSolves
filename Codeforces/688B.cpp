#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(void)
{
    char input[100010];
    int i,len;
    cin>>input;
    len=strlen(input);
    cout<<input;
    for(i=0;i<len;i++)
        cout<<input[len-i-1];
}
