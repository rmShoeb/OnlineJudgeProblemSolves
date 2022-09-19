#include <iostream>
using namespace std;

int main() {
	int t{0};
	int n{0};
	int m{0};
	int x{0};

	cin >> t;
	while(t--){
	    cin >> n >> m >> x;
	    cout << 2*(n+m)*x << endl;
	}
	return 0;
}
