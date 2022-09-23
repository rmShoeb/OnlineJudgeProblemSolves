#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	short t{0};
	int n{0};
	int x{0};
	
	cin >> t;
	while(t--){
	    cin >> n >> x;
	    cout << min(x, n-x) << endl;
	}
	return 0;
}
