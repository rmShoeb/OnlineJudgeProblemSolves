#include <iostream>
using namespace std;

int main() {
	int t{0};
	int A{0};
	int X{0};
	int B{0};
	int Y{0};
	double speed_A{0};
	double speed_B{0};
	
	cin >> t;
	while(t--){
	    cin >> A >> X >> B >> Y;
	    speed_A = static_cast<double>(A)/X;
	    speed_B = static_cast<double>(B)/Y;
	    if(speed_A > speed_B) cout << "Alice" << endl;
	    else if(speed_A < speed_B) cout << "Bob" << endl;
	    else cout << "EQUAL" << endl;
	}
	return 0;
}
