#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char c){
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
            break;
        default:
            return false;
            break;
    }
}

bool is_happy(string s){
    unsigned short s_len{0};
	unsigned short count{0};
	unsigned short i, j;
    s_len = s.size();

    for(i=0; i<s_len; i++){
        if(is_vowel(s[i])){
            count = 1;
            for(j=i+1; j<s_len; j++){
                if(is_vowel(s[j])) count++;
                else break;
            }
            if(count>2) return true;
        }
    }
    
    return false;
}

int main() {
	short t{0};
	string s;
	
	cin >> t;
	while(t--){
	    cin >> s;
	    if(is_happy(s)) printf("Happy\n");
	    else printf("Sad\n");
	}
	return 0;
}
