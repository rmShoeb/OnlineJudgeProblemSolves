#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{
	//code
	int t, n;
	int i;
	int arr[1010];
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    for(i=0; i<n; i++)
	        cin >> arr[i];
	    sort(arr, arr+n);
	    for(i=0; i<n; i++)
	        cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}
