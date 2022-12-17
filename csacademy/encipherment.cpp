#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
using namespace std;

int main() {
    char s[105];
    char en[30];
    int i;
    int temp;
    
    scanf("%s",s);
    scanf("%s",en);
    
    for(i=0;i<strlen(s);i++)
    {
        temp=s[i]-97;
        s[i]=en[temp];
    }
    
    printf("%s",s);
    
    return 0;
}