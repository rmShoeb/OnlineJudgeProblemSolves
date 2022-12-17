#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int main() {
    char n[1005];
    int c[10]={0};
    int i;
    
    cin>>n;
    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]=='0')
            c[0]++;
        else if(n[i]=='1')
            c[1]++;
        else if(n[i]=='2')
            c[2]++;
        else if(n[i]=='3')
            c[3]++;
        else if(n[i]=='4')
            c[4]++;
        else if(n[i]=='5')
            c[5]++;
        else if(n[i]=='6')
            c[6]++;
        else if(n[i]=='7')
            c[7]++;
        else if(n[i]=='8')
            c[8]++;
        else if(n[i]=='9')
            c[9]++;
    }
    
    if(c[0]==c[1]&&c[0]==c[2]&&c[0]==c[3]&&c[0]==c[4]&&c[0]==c[5]&&c[0]==c[6]&&c[0]==c[7]&&c[0]==c[8]&&c[0]==c[9])
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    
    return 0;
}