#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    
    unsigned short X{0};
    double Y{0};
    
    cin >> X >> Y;
    if(X%5!=0 or Y<(static_cast<double>(X)+0.5)) cout << Y << endl;
    else cout << Y-(static_cast<double>(X)+0.5) << endl;

    return 0;
}
