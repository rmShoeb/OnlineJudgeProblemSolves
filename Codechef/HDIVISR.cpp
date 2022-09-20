#include <iostream>
using namespace std;

int main() {
	unsigned short n{0};
	unsigned short div{10};

	cin >> n;
	while(div>0){
	    if(n%div == 0) break;
	    div--;
	}
	cout << div << endl;

	return 0;
}
