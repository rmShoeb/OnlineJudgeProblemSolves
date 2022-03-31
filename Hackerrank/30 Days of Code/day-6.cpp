#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[10005];
    char o[5005];
    char e[5005];
    int i,j,k;
    int t;
    cin>>t;
    while(t)
    {
        scanf("%s",s);
        j=0;
        k=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(i%2==0)
            {
                e[j]=s[i];
                j++;
            }
            else
            {
                o[k]=s[i];
                k++;
            }
        }
        e[j]='\0';
        o[k]='\0';
        printf("%s %s\n",e,o);
        t--;
    }
    return 0;
}
