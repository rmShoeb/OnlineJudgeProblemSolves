#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n{0};
    string str;
    unsigned long faces{0};

    cin >> n;
    while(n--){
        cin >> str;
        if(str == "Tetrahedron") faces += 4;
        else if(str == "Cube") faces += 6;
        else if(str == "Octahedron") faces += 8;
        else if(str == "Dodecahedron") faces += 12;
        else faces += 20;
    }
    cout << faces << endl;

    return 0;
}