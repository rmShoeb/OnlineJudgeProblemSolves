#include <iostream>
using namespace std;

int main() {
	int t{0};
	int seat{0};
	
	cin >> t;
	while(t--){
	    cin >> seat;
	    if(seat>50) cout << "RIGHT" << endl;
	    else cout << "LEFT" << endl;
	}
	return 0;
}
