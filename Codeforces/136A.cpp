#include <iostream>
using std::cin;

int main(int argc, char const *argv[])
{
    int n = 0;
    int temp = 0;

    cin >> n;
    int p[n]{0};

    for(int i=0; i<n; i++){
        cin >> temp;
        p[temp-1] = i+1;
    }

    for(int i=0; i<n; i++)
        printf("%d ", p[i]);
    printf("\n");

    return 0;
}
