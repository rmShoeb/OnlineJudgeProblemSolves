#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<ctype.h>
using namespace std;

int main(void)
{
    int t,len;
    char input[35];
    cin>>t;
    while(t--)
    {
        cin>>input;
        len=strlen(input);
        if(input[len-1]=='x'||input[len-1]=='s'||input[len-1]=='o'||(input[len-2]=='c'&&input[len-1]=='h'))
        {
            input[len]='e';
            input[len+1]='s';
            input[len+2]='\0';
        }
        else if(input[len-1]=='f')
        {
            input[len-1]='v';
            input[len]='e';
            input[len+1]='s';
            input[len+2]='\0';
        }
        else if(input[len-2]=='f'&&input[len-1]=='e')
        {
            input[len-2]='v';
            input[len-1]='e';
            input[len]='s';
            input[len+1]='\0';
        }
        else if(input[len-1]=='y')
        {
            input[len-1]='i';
            input[len]='e';
            input[len+1]='s';
            input[len+2]='\0';
        }
        else
        {
            input[len]='s';
            input[len+1]='\0';
        }
        cout<<input<<endl;
    }
}
