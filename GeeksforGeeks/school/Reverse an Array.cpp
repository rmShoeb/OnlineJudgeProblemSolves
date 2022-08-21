#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{
	//code
	int t;
	int arr[110];
	int i;
	int n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    for(i=0; i<n; i++)
	        cin >> arr[i];
	    for(i=n-1; i>=0; i--)
	        cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}