#include <iostream>
using namespace std;

int main() {
	int t{0};
	int ref{0};
	bool in{true};
	
	cin >> t;
	while(t--){
	    in = true;
	    for(int i=0; i<4; i++){
	        cin >> ref;
	        if(ref==1) in=false;
	    }
	    if(in) cout << "IN" << endl;
	    else cout << "OUT" << endl;
	}
	return 0;
}
