#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
    cout << fixed << setprecision(5);

    short n{0};
    double sum{0};
    unsigned portion{0};

    cin >> n;
    for(short i=0; i<n; i++){
        cin >> portion;
        sum += portion;
    }
    cout << sum/n << endl;

    return 0;
}