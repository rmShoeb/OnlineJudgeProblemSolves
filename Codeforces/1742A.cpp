#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int t;
    short a, b, c;

    cin >> t;
    while(t--){
        cin >> a >> b >> c;

        if(a+b == c) printf("YES\n");
        else if(a+c == b) printf("YES\n");
        else if(b+c == a) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}