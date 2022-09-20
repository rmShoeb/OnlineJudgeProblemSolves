#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void){
    cout<<fixed<<setprecision(7);
    
	short a{0};
	short b{0};
	short c{0};
	double s_root{0};
	
	cin >> a >> b >> c;
	s_root = static_cast<double>(sqrt(b*b - 4*a*c));
	cout << (-b+s_root)/(2*a) << endl;
	cout << (-b-s_root)/(2*a) << endl;
	return 0;
}
