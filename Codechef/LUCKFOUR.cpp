#include <iostream>
using namespace std;

int main() {
	int t{0};
	unsigned n{};
	unsigned four{0};

	cin >> t;
	while(t--){
	    cin >> n;
	    four = 0;
	    while(n>0){
	        if(n%10==4) four++;
	        n /= 10;
	    }
	    cout << four << endl;
	}

	return 0;
}
