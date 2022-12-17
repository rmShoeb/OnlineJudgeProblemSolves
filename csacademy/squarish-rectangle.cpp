#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long w, h;
    long long new_w;
    long long mul;

    cin >> w >> h;

    mul = w*h;
    new_w = sqrt(mul);
    while(true){
        if((mul/new_w)*new_w == mul) break;
        new_w--;
    }
    cout << abs(new_w-(mul/new_w)) << endl;

    return 0;
}