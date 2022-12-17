#include <iostream>
using namespace std;

int main(void){
    short t, mp, lp, i;
    
    cin >> t;
    for(i=0; i<t; i++){
        cin >> mp >> lp;
        printf("Case %d: %d\n", i+1, (abs(mp-lp)+mp)*4+19);
    }
    
    return 0;
}