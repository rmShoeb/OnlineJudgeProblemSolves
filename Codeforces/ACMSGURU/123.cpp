#include <iostream>
using namespace std;

long fib_sum(int n){
    if(n<2) return 1;

    int a{1};
    int b{1};
    int temp{0};

    long sum{a+b};

    for(int i=2; i<n; i++){
        temp = a+b;
        a = b;
        b = temp;

        sum += temp;
    }

    return sum;
}

int main(void){
    int n{0};

    cin >> n;
    cout << fib_sum(n) << endl;

    return 0;
}