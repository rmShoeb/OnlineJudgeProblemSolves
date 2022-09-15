#include<iostream>
using namespace std;
 
int main(void)
{
    int n;
    int output=0;
    char x[5];
 
    cin>>n;
    while(n--){
        cin>>x;
        if(x[1]=='+') output++;
        else output--;
    }
    cout<<output;
    
    return 0;
}