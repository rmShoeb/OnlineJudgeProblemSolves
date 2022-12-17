#include <iostream>
#include <string>
using namespace std;

string suspense(string s, unsigned short n){
    string t{""};
    unsigned short a{0};
    unsigned short b{0};
    bool alice_play{true};

    b = n-1;
    while(a<=b){
        if(alice_play){
            if(s[a]=='0') t.insert(0, "0");
            else t.push_back('1');
            
            alice_play = false;
            a++;
        }
        else{
            if(s[b]=='0') t.push_back('0');
            else t.insert(0, "1");
            
            alice_play = true;
            b--;
        }
        //cout << t << endl;
    }
    
    return t;
}

int main() {
	short t{0};
	unsigned short n{0};
	string s;
	
	cin >> t;
	while(t--){
	    cin >> n;
	    cin >> s;
	    
	    cout << suspense(s, n) << endl;
	    //break;
	}
	return 0;
}
