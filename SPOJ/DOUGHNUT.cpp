#include <iostream>
using namespace std;

int main(void)
{
	int t,c,k,w;
	
	cin>>t;
	
	while(t--)
	{
		cin>>c>>k>>w;
		if((c*w)>k)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}

	return 0;
}