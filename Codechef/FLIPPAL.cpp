#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int t{0};
	int n{0};
	string s;
	int z_count, o_count;
	
	cin >> t;
	while(t--){
	    cin >> n;
	    cin >> s;
	    z_count = o_count = 0;
	    
	    for(int i=0; i<n; i++){
	        if(s[i]=='0') z_count++;
	        else o_count++;
	    }
	    if(n%2==0){
	        if(z_count%2==0 and o_count%2==0) printf("YES\n");
	        else printf("NO\n");
	    }
	    else{
	        if(z_count%2==0 and o_count%2!=0) printf("YES\n");
	        else if(z_count%2!=0 and o_count%2==0) printf("YES\n");
	        else printf("NO\n");
	    }
	}
	return 0;
}
