#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;

class Information
{
public:
    string name;
    char ip[20];
};

int main(void)
{
    int n,m;
    int len;
    int i,j;
    cin>>n>>m;

    Information Server[n];
    Information Command[m];

    for(i=0;i<n;i++)
    {
        cin>>Server[i].name>>Server[i].ip;
        len=strlen(Server[i].ip);
        Server[i].ip[len]=';';
        len++;
        Server[i].ip[len]='\0';
    }
    for(i=0;i<m;i++)
        cin>>Command[i].name>>Command[i].ip;

    for(i=0;i<m;i++)
    {
        cout<<Command[i].name<<" "<<Command[i].ip<<" #";
        for(j=0;j<n;j++)
        {
            if(strcmp(Command[i].ip,Server[j].ip)==0)
            {
                cout<<Server[j].name<<endl;
                break;
            }
        }
    }
}
