#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(void){
    string in;

    cin >> in;
    
    switch (in[6])
    {
    case '0':
    case '2':
    case '4':
    case '6':
    case '8':
        cout << 0 << endl;
        break;
    default:
        cout << 1 << endl;
        break;
    }

    return 0;
}