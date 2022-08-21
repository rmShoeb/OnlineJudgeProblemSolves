#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{
    int t;
    int n;
    int arr[110];
    int x;
    int i;
    int OR;
    cin >> t;
    while(t--)
    {
        OR = 0;
        cin >> n >> x;
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]%x == 0)
                OR = (OR | arr[i]);
        }
        cout << OR << endl;
    }
	return 0;
}