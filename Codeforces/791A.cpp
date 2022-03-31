#include <iostream>
#include <cstdint>
using namespace std;

int main(){
	int a, b;
	int i = 0;

	cin >> a >> b;
	while(true){
		a *= 3;
		b *= 2;
		i++;
		if(a > b){
			cout << i << endl;
			break;
		}
	}
}
