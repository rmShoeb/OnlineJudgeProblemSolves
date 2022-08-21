#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

bool Isogram(void)
{
    string baalchaal;
    int i, j;
    int length;
    cin >> baalchaal;
    length = baalchaal.length();
    for(i=0; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(baalchaal[i] == baalchaal[j])
            return false;
        }
    }
    return true;
}

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
	    cout << Isogram() << endl;
	}
	return 0;
}