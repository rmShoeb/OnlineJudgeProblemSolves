//Initial Template for C++
//dont run this code in this pc
//without modifying the hash[1000][1000] array
#include <bits/stdc++.h>
using namespace std;
// Function Prototype
int countSpecials(int[], int, int);
//Position this line where user code will be pasted.
// Driver code to rest countSpecials function
int main() {

	// Testcase input
	int testcase;
	cin >> testcase;

	while(testcase--){

	    // sizeof_array : number of array elements
	    // K : as given in statement
	    int sizeof_array, K;
	    cin >> sizeof_array >> K;

	    // array of size sizeof_array
	    int arr[sizeof_array];

	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }

	    // calling function and printing count the occurrence
	    cout << countSpecials(arr, sizeof_array, K) << endl;

	}

	return 0;
}

int countSpecials(int arr[], int sizeof_array, int K)
{
    int f = floor(sizeof_array/K), count = 0;
    int i, j;
    int hash_index;
    int repeat;
    int hash[1000][1000] = {0};

    for(i=0; i<sizeof_array; i++)
    {
        hash_index = arr[i]%1000;
        j = 0;
        while(hash[hash_index][j] != 0)
            j++;
        hash[hash_index][j] = arr[i];
    }
    for(i=0; i<1000; i++)
    {
        j = 0;
        while(hash[i][j] != 0)
            j++;
        if(j == f)
            count++;
    }
    return count;
}
