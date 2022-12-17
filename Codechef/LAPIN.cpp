#include <iostream>
using namespace std;

bool is_lapidrome(string s){
    unsigned short s_len{0};
	unsigned short left[26]{0};
	unsigned short right[26]{0};
	
	s_len = s.size();
	for(int i=0; i<s_len/2; i++){
	    left[s[i]-'a']++;
	    right[s[s_len-i-1]-'a']++;
	}
	for(int i=0; i<26; i++){
	    if(left[i]!=right[i]) return false;
	}
	
	return true;
}

int main() {
	short t{0};
	string s;
	
	cin >> t;
	while(t--){
	    cin >> s;
	    if(is_lapidrome(s)) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}
