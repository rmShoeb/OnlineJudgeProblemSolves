#include <iostream>
using namespace std;

int main() {
	short t{0};
	short n{0};
	short a{0};
	unsigned short count{0};
	bool zero{false};
	
	cin >> t;
	while(t--){
	    cin >> n;
	    count = 0;
	    zero = false;
	    while(n--){
	        cin >> a;
	        if(a<0) count++;
	        else if(a == 0) zero = true;
	    }
	    if(count%2!=0 and !zero) cout << 1 << endl;
	    else cout << 0 << endl;
	}
	
	return 0;
}
