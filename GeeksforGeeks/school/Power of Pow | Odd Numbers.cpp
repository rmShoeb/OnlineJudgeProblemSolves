#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{
	int t;
	long long int n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cout << (n*(2*n+1)*(2*n-1))/3 << endl;
	}
	return 0;
}