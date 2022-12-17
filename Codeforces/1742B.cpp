#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;

int main(void){
    short t, n, i, j;
    int a[100];
    bool strict;

    cin >> t;
    while(t--){
        cin >> n;
        for(i=0; i<n; i++) cin >> a[i];

        strict = true;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    strict = false;
                    break;
                }
                if(!strict) break;
            }
        }

        if(strict) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}