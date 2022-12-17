#include <iostream>
using namespace std;

int main() {
	short t, count, n;
	char c, b;
	
	cin >> t;
	while(t--){
	    cin >> n;
	    count = 0;
	    cin >> b;
	    for(short i=1; i<n; i++){
	        cin >> c;
	        if(b==c) count++;
	        b = c;
	    }
	    cout << count << endl;
	}
	return 0;
}
