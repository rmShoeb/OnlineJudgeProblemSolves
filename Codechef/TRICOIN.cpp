#include <iostream>
#include <cmath>
using namespace std;

int main() {
    short t{0};
	unsigned long n{0};

	cin >> t;
	while(t--){
	    cin >> n;
	    cout << (static_cast<unsigned>(sqrt(1+8*n))-1)/2 << endl;
	}

	return 0;
}
