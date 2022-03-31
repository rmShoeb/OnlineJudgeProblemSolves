/**
    editor_rmShoeb_CSE_16
    started_at_1210_3/22/2018
    finished_at_1225_3/22/2018
    unsolved
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
using namespace std;

int main(void)
{
    char input[110];                        ///variable for input string
    char output[110];                       ///variable for output string
    int i;                                  ///index
    int j=0;                                ///index
    int len_in;                             ///length of input string
    int len_out;                            ///length of output string

    cin>>len_in;
    cin>>input;

    for(i=0;i<len_in;i++)
    {
        if(input[i]=='R'&&input[i+1]=='U')
        {
            output[j]='D';
            j++;
            i++;
        }
        else if(input[i]=='U'&&input[i+1]=='R')
        {
            output[j]='D';
            j++;
            i++;
        }
        else
        {
            output[j]=input[i];
            j++;
        }
    }
    len_out=strlen(output);

    cout<<output<<endl;
    cout<<len_out;
}
