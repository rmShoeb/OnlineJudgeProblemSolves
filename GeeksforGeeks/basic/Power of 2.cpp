#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include <cmath>
using namespace std;

int main(void)
{
	int t;
	long long int n;
	double temp;
	double logn;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    if(n > 0)
	    {
	        logn = log2(n);
    	    temp = ceil(logn);
    	    if(logn < temp)
    	        cout << "NO" << endl;
    	    else
    	        cout << "YES" << endl;
	    }
	    else
	        cout << "NO" << endl;
	}
	return 0;
}