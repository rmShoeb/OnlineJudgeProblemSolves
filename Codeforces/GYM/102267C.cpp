#include<iostream>
using namespace std;

int main(void)
{
    long long int S;
    long long int X;
    long long int NumberOfDolls = 0;

    cin >> S >> X;

    while(S > 0)
    {
        S /= X;
        NumberOfDolls++;
    }

    cout << NumberOfDolls;
}
