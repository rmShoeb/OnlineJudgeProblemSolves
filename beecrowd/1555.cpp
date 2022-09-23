#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <initializer_list>
using namespace std;

int main(void){
    int n{0};
    short x{0};
    short y{0};
    int r{0};
    int b{0};
    int c{0};
    int m{0};

    cin >> n;
    while(n--){
        cin >> x >> y;
        r = 9*x*x + y*y;
        b = 2*x*x + 25*y*y;
        c = -100*x + y*y*y;
        m = max({r,b,c});

        if(m==r) cout << "Rafael ganhou" << endl;
        else if(m==b) cout << "Beto ganhou" << endl;
        else cout << "Carlos ganhou" << endl;
    }

    return 0;
}