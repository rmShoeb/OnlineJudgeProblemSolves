#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{
	//code
	int t,n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cout << ((n*(n+1))/2) << endl;
	}
	return 0;
}