#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n{0};
    short x{0};
    short y{0};

    cin >> n;
    while(n--){
        cin >> x >> y;
        cout << (x*y)/2 << " cm2" << endl;
    }

    return 0;
}