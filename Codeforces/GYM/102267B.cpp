#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

void prime(unsigned n){
    if(n<3){
        cout << -1 << endl;
        return;
    }
    unsigned root{static_cast<unsigned>(sqrt(n))};

    for(int i=3; i<=root; i+=2){
        if(n%i == 0){
            cout << -1 << endl;
            return;
        }
    }
    cout << 2 << " " << n << endl;
    return;
}

int main(void){
    unsigned n{0};

    cin >> n;
    prime(n-2);

    return 0;
}